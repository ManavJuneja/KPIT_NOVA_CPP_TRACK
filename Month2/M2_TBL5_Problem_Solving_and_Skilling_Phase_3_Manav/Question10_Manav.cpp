#include<iostream>
#include<string>
#include<vector>

using namespace std;

enum EngineType{PETROL, DIESEL, ELECTRIC, HYBRID};

class Engine{
    private:
    EngineType type;
    double capacity;
    public:
    Engine(){}
    Engine(EngineType type, double capacity){
        this->type = type;
        this->capacity = capacity;
    }
    EngineType getType() const{ return type; }
    double getCapacity() const{ return capacity; }
};
class Vehicle{
    protected:
    string make;
    string model;
    int year;
    double price;
    Engine engine;
    public:
    Vehicle(string make, string model, int year, double price, Engine engine){
        this->make = make;
        this->model = model;
        this-> year = year;
        this-> price = price;
        this->engine = engine;
    }
    virtual double calculateMileage()const =0 ;
    virtual void printDetails() const = 0;
    double getPrice() const{return price;}
    friend void displayOutput(const Vehicle& v);
};

class TouristVehicle : public Vehicle{
    private:
        int seats;
        string transmission;
    public:
        TouristVehicle(string make, string model, int year, double price, Engine engine, int seats, string transmision):
        Vehicle(make, model, year, price, engine), seats(seats), transmission(transmision){}
        double calculateMileage()const override{
            return (engine.getType() == ELECTRIC) ? 100.0 : 10.0;
        }
        void printDetails() const override{
            cout << "Tourist Vehicle: " << make << " " << model << " (" << year << ") "
             << "Price: " << price << ", Seats: " << seats << ", Transmission: " << transmission << "\n";
    }
};

class PrivateVehicle : public Vehicle{
    private:
         int doors;
        string transmission;
    public:
        PrivateVehicle(string make, string model, int year, double price, Engine engine, int doors, string transmission):
        Vehicle(make, model, year, price, engine), doors(doors), transmission(transmission){}
        double calculateMileage() const override{
            return (engine.getType() == ELECTRIC) ? 200.0 : 12.0;
        }
        void printDetails() const override {
            cout << "Private Vehicle: " << make << " " << model << " (" << year << ") "
                 << "Price: " << price << ", Doors: " << doors << ", Transmission: " << transmission << "\n";
        }
};
void displayOutput(const Vehicle &v){
    v.printDetails();
}
double calculateTotalPrice(const vector<Vehicle*>& vehicles){
    double total = 0;
    for(const auto&v : vehicles){
        total += v->getPrice();
    }
    return total;
}
int main(){
    vector<Vehicle*> vehicles;
    
    Engine e1(PETROL, 1.5);
    Engine e2(DIESEL, 2.0);
    Engine e3(ELECTRIC, 0);
    
    TouristVehicle t1("Toyota", "Innova", 2022, 25000, e1, 7, "Automatic");
    PrivateVehicle p1("Tesla", "Model S", 2023, 70000, e3, 4, "Automatic");
    
    vehicles.push_back(&t1);
    vehicles.push_back(&p1);
    
    for (const auto& v : vehicles) {
        displayOutput(*v);
    }
    
    cout << "Total Price of Vehicles: " << calculateTotalPrice(vehicles) << "\n";
    return 0;
}