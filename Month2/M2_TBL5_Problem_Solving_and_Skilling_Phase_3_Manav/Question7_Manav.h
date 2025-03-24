#ifndef QUESTION7_MANAV_H
#define QUESTION7_MANAV_H
#include<string>

class Vehicle{
    protected:
        int vehicleId;
        std::string make;
        std::string model;
        double price;
        double mileage;
    public:
        Vehicle(){}
        Vehicle(int, std:: string, std::string, double, double);
        virtual void displayDetails();
        double getPrice() const;
        double getMileage() const;
        int getVehicleID() const;
        virtual ~Vehicle();
};
class Car : public Vehicle{
    private:
        std::string engineType;
    public:
        Car(int, std:: string, std::string, double, double, std::string);
        void displayDetails() override;
};
class Truck : public Vehicle{
    private:
        double payloadCapacity;
    public:
        Truck(int, std:: string, std::string, double, double, double);
        void displayDetails() override;
};
void displayVehicleDetails(Vehicle* vehicles[], int size);
double calculateTotalMileage(Vehicle* vehicle[], int size);
void sortVehicleByPrice(Vehicle* vehicle[], int size);
Vehicle* searchVehiclesByVehicleId(Vehicle* vehicles[], int size, int id);



#endif 