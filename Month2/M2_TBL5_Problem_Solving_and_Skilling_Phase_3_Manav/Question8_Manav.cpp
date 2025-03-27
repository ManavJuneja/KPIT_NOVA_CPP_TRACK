#include <iostream>
#include <string>
#include <unordered_map>

class Battery {
private:
    double capacity;
    double chargeLevel;
    double voltage;
    double temperature;
    std::unordered_map<std::string, double> parameters;

public:
    Battery(double capacity = 0, double chargeLevel = 0, double voltage = 0, double temperature = 0)
        : capacity(capacity), chargeLevel(chargeLevel), voltage(voltage), temperature(temperature) {
        parameters["chargeRate"] = 0.0;
        parameters["dischargeRate"] = 0.0;
        parameters["temperature"] = temperature;
    }

    
    void charge() { chargeLevel += 10; if (chargeLevel > capacity) chargeLevel = capacity; }
    void discharge() { chargeLevel -= 10; if (chargeLevel < 0) chargeLevel = 0; }
    double getCapacity() const { return capacity; }
    double getChargeLevel() const { return chargeLevel; }
    double getVoltage() const { return voltage; }
    double getTemperature() const { return temperature; }


    double& operator[](const std::string& key) { return parameters[key]; }


    Battery& operator*() { return *this; }

    
    Battery* operator->() { return this; }

    
    friend std::istream& operator>>(std::istream& is, Battery& battery) {
        std::cout << "Enter capacity: ";
        is >> battery.capacity;
        std::cout << "Enter charge level: ";
        is >> battery.chargeLevel;
        std::cout << "Enter voltage: ";
        is >> battery.voltage;
        std::cout << "Enter temperature: ";
        is >> battery.temperature;
        battery.parameters["temperature"] = battery.temperature;
        return is;
    }

    
    friend std::ostream& operator<<(std::ostream& os, const Battery& battery) {
        os << "Battery Details:\n";
        os << "Capacity: " << battery.capacity << "\n";
        os << "Charge Level: " << battery.chargeLevel << "\n";
        os << "Voltage: " << battery.voltage << "\n";
        os << "Temperature: " << battery.temperature << "\n";
        return os;
    }

    
    Battery& operator++() { charge(); return *this; }

    
    Battery& operator--() { discharge(); return *this; }

    
    Battery& operator=(const Battery& other) {
        if (this != &other) {
            capacity = other.capacity;
            chargeLevel = other.chargeLevel;
            voltage = other.voltage;
            temperature = other.temperature;
            parameters = other.parameters;
        }
        return *this;
    }
};

int main() {
    Battery battery1(100, 50, 12.5, 25);
    Battery battery2;

    std::cout << battery1;

    
    std::cin >> battery2;

    
    battery1["chargeRate"] = 5.5;
    std::cout << "Charge Rate: " << battery1["chargeRate"] << "\n";


    Battery& refBattery = *battery1;
    std::cout << "Charge Level (via dereference): " << refBattery.getChargeLevel() << "\n";

    
    battery1->charge();
    std::cout << "Charge Level (after charging via ->): " << battery1.getChargeLevel() << "\n";

    
    ++battery1;
    std::cout << "Charge Level (after ++): " << battery1.getChargeLevel() << "\n";
    --battery1;
    std::cout << "Charge Level (after --): " << battery1.getChargeLevel() << "\n";

    
    battery2 = battery1;
    std::cout << "Battery 2 Details (after assignment):\n" << battery2;

    return 0;
}
