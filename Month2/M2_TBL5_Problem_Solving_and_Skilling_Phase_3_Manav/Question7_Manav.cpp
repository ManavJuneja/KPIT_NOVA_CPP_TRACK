#include"Question7_Manav.h"
#include<iostream>
#include<algorithm>

using namespace std;

Vehicle::Vehicle(int vehicleId, string make, string model, double price, double mileage){
    this->vehicleId = vehicleId;
    this->make = make;
    this->model = model;
    this->price = price;
    this->mileage = mileage;
}
void Vehicle::displayDetails(){
    cout << "Vehicle ID: " << this->vehicleId 
         << "\nMake: " << this->make 
         << "\nModel: " << this->model 
         << "\nPrice: " << this->price 
         << "\nMileage: " << this->mileage;
}
double Vehicle::getPrice()const{return price;}
double Vehicle::getMileage()const{return mileage;}
int Vehicle::getVehicleID()const{return vehicleId;}

Vehicle::~Vehicle(){};

Car::Car(int vehicleId, string make, string model, double price, double mileage, string engineType)
:Vehicle(vehicleId, make, model, price, mileage){
    this->engineType = engineType;
}

void Car::displayDetails(){
    Vehicle::displayDetails();
    cout<<"\nEngine Type: "<<this->engineType<<"\n";
}

Truck::Truck(int vehicleId, string make, string model, double price, double mileage, double payloadCapacity)
    : Vehicle(vehicleId, make, model, price, mileage){
        this->payloadCapacity = payloadCapacity;
}

void Truck::displayDetails(){
    Vehicle::displayDetails();
    cout<<"\nPayload Capacity: "<<this->payloadCapacity<<" tons\n";
}

void displayVehicleDetails(Vehicle* vehicles[], int size){
    for(int i = 0; i < size; ++i){
        vehicles[i]->displayDetails();
    }
    cout<<endl;
}

double calculateTotalMileage(Vehicle* vehicles[], int size){
    double totalMileage = 0;
    for(int i = 0;i < size; ++i ){
        totalMileage += vehicles[i]->getMileage();
    }
    return totalMileage;
}

void sortVehicleByPrice(Vehicle* vehicles[], int size){
    sort(vehicles, vehicles + size, [](Vehicle* a, Vehicle *b){
        return a->getPrice() > b->getPrice();
    });
}

Vehicle* searchVehiclesByVehicleId(Vehicle* vehicles[], int size, int vehicleId){
    for(int i = 0; i < size; i++){
        if(vehicles[i]->getVehicleID() == vehicleId){
            return vehicles[i];
        }
    }
    return nullptr;
}

int main(){
    Car car1(1,"Tata", "Punch", 20000, 30, "Petrol");
    Car car2(2,"Suzuki", "Breeza", 22000,28,"Cng");
    Truck truck1(3, "Suzuki", "D-Max", 30000, 15, 2.5);
    Truck truck2(4, "Toyota", "Hilux", 35000, 14, 3.0);
    Truck truck3(5, "Ram", "1500", 40000, 12, 3.5);

    Vehicle* vehicles[] = { &car1, &car2, &truck1, &truck2, &truck3 };
    int size = sizeof(vehicles) / sizeof(vehicles[0]);

    cout << "Vehicle Details:\n";
    displayVehicleDetails(vehicles, size);

    cout << "Total Mileage: " << calculateTotalMileage(vehicles, size) << "\n";

    sortVehicleByPrice(vehicles, size);
    cout << "Vehicles sorted by price:\n";
    displayVehicleDetails(vehicles, size);

    int searchId = 3;
    Vehicle* foundVehicle = searchVehiclesByVehicleId(vehicles, size, searchId);
    if (foundVehicle) {
        cout << "Vehicle found with ID " << searchId << "\n";
        foundVehicle->displayDetails();
    } else {
        cout << "Vehicle with ID " << searchId << " not found.\n";
    }

    return 0;
}