#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class App {
private:
    std::string name;
    std::vector<std::string> permissions;

public:
    App(const std::string& appName) : name(appName) {}
    
    std::string getName() const { return name; }
    
    void addPermission(const std::string& permission) {
        permissions.push_back(permission);
    }
    
    void removePermission(const std::string& permission) {
        permissions.erase(std::remove(permissions.begin(), permissions.end(), permission), permissions.end());
    }
    
    std::vector<std::string> getPermissions() const { return permissions; }
};

class MobileAppManager {
private:
    std::unordered_map<std::string, App> installedApps;

public:
    void installApp(const std::string& appName) {
        if (installedApps.find(appName) == installedApps.end()) {
            installedApps[appName] = App(appName);
            std::cout << "App installed: " << appName << std::endl;
        } else {
            std::cout << "App already installed: " << appName << std::endl;
        }
    }
    
    void uninstallApp(const std::string& appName) {
        if (installedApps.erase(appName)) {
            std::cout << "App uninstalled: " << appName << std::endl;
        } else {
            std::cout << "App not found: " << appName << std::endl;
        }
    }
    
    void assignPermission(const std::string& appName, const std::string& permission) {
        if (installedApps.find(appName) != installedApps.end()) {
            installedApps[appName].addPermission(permission);
            std::cout << "Permission " << permission << " assigned to " << appName << std::endl;
        } else {
            std::cout << "App not found: " << appName << std::endl;
        }
    }
    
    void revokePermission(const std::string& appName, const std::string& permission) {
        if (installedApps.find(appName) != installedApps.end()) {
            installedApps[appName].removePermission(permission);
            std::cout << "Permission " << permission << " revoked from " << appName << std::endl;
        } else {
            std::cout << "App not found: " << appName << std::endl;
        }
    }
    
    void listInstalledApps() const {
        std::cout << "Installed Apps:" << std::endl;
        for (const auto& pair : installedApps) {
            std::cout << "- " << pair.first << std::endl;
        }
    }
    
    void listAppPermissions(const std::string& appName) const {
        if (installedApps.find(appName) != installedApps.end()) {
            std::cout << "Permissions for " << appName << ": ";
            for (const auto& perm : installedApps.at(appName).getPermissions()) {
                std::cout << perm << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "App not found: " << appName << std::endl;
        }
    }
};

int main() {
    MobileAppManager manager;
    manager.installApp("WhatsApp");
    manager.assignPermission("WhatsApp", "Camera");
    manager.assignPermission("WhatsApp", "Location");
    manager.listAppPermissions("WhatsApp");
    manager.listInstalledApps();
    manager.uninstallApp("WhatsApp");
    manager.listInstalledApps();
    return 0;
}
