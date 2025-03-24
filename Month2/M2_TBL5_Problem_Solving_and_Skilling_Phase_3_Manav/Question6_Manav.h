#include<string>
class ElectricVehicle{
    public:
    int vehicleId;
    std::string make;
    std::string model;
    double batteryCapacity;
    double chargeLevel;
    ElectricVehicle();
    ElectricVehicle(int, std::string, std::string, double, double);
    void charge(double);
    void drive(double);
    void displayVehicleDetails();

};