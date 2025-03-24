#include<iostream>
#include "Question6_Manav.h"
#include<string>
 
ElectricVehicle::ElectricVehicle(){}
ElectricVehicle::ElectricVehicle(int vehicleId, std::string make, std::string model, double batteryCapacity, double chargeLevel){
    this->vehicleId = vehicleId;
    this->make = make;
    this->model = model;
    this->batteryCapacity = batteryCapacity;
    this->chargeLevel = chargeLevel;
}
void ElectricVehicle::charge(double hours){
    double chargeAdded = hours * 5.0;
    chargeLevel += chargeAdded;
    if(chargeLevel > batteryCapacity){
        chargeLevel = batteryCapacity;
    }
    std::cout<<"Vehicle with Id No. "<<vehicleId<<" Charged in "<<hours<<std::endl;
}
void ElectricVehicle::drive(double km){
    double chargeConsumed = km * 0.50;
    if(chargeConsumed > chargeLevel){
        std::cout<<"No charge left CHARGE IMMEDIATELY";
    }else{
        chargeLevel -= chargeConsumed;
        std::cout<<"Vehicle with Id No. "<<vehicleId<<" driven for "<<km<<std::endl;
    }
}
void ElectricVehicle::displayVehicleDetails(){
    std::cout<<"Vehicle ID : "<<vehicleId<<std::endl;
    std::cout<<"Make : "<<make<<std::endl;
    std::cout<<"Model : "<<model<<std::endl;
    std::cout<<"Battery Capacity : "<<batteryCapacity<<std::endl;
    std::cout<<"Charge Level : "<<chargeLevel<<std::endl;
}


int main(){
    ElectricVehicle ev1(12345,"Tesla", "Model 3",  75.0, 50.0);
    ElectricVehicle ev2(67890, "Nissan","Leaf", 60.0, 30.0);

    ev1.charge(2);
    ev1.displayVehicleDetails();
    ev1.drive(160.9);
    ev1.displayVehicleDetails();

    ev2.charge(1.5);
    ev2.displayVehicleDetails();
    ev2.drive(80.5); 
    ev2.displayVehicleDetails();

    return 0;

}