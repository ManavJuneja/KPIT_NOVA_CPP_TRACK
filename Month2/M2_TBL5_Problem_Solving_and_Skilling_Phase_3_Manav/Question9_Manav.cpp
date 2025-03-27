#include<iostream>
#include<string>

using namespace std;

class Vehicle{
    protected:
    string make;
    string model;
    int year;

    public:
    Vehicle(){}
    Vehicle(string make, string model, int year){
        this->make = make;
        this->model = model;
        this->year = year;
    }
    virtual void displayDetails(){
        cout<<"Make: "<<make<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
    }
};
class Car : public Vehicle{
    public:
    Car(){}
    Car(string make, string model, int year):Vehicle(make, model, year){}
};
class Truck: public Vehicle{
    public:
    Truck(){}
    Truck(string make, string model, int year):Vehicle(make, model, year){}
};
class Electric{
    protected:
    double batteryCapacity;
    double chargeLevel;

    public:
    Electric(){}
    Electric(double batteryCapacity, double chargeLevel){
        this->batteryCapacity = batteryCapacity;
        this->chargeLevel = chargeLevel;
    }
    virtual void displayElectricDetails(){
        cout<<"Battery Capacity: "<<batteryCapacity<<endl;
        cout<<"Charge Level: "<<chargeLevel<<endl;
    }

};
class ElectricCar: public Car, public Electric{
    public:
    ElectricCar(){}
    ElectricCar(string make, string model, int year, double batteryCapacity, double chargeLevel):Car(make, model, year), Electric(batteryCapacity, chargeLevel){}
    void displayDetails(){
        Car::displayDetails();
        displayElectricDetails();
    }
};
class ElectricTruck: public Truck, public Electric{
    public:
    ElectricTruck(){}
    ElectricTruck(string make, string model, int year, double batteryCapacity, double chargeLevel):Truck(make, model, year), Electric(batteryCapacity, chargeLevel){}
    void displayDetails(){
        Truck::displayDetails();
        displayElectricDetails();
    }
};

int main(){

    ElectricCar tata("Tata", "Nexon EV", 2023, 40.5, 85.0);
    ElectricTruck mahindra("Mahindra", "Blazo EV", 2024, 150.0, 70.0);

    cout << "Electric Car Details:\n";
    tata.displayDetails();
    cout << "\n";

    cout << "Electric Truck Details:\n";
    mahindra.displayDetails();
    cout << "\n";
    return 0;
}