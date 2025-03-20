#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    class Address{
        public:
        string country;
        string stName;
        int hNo;
    };
    Address addr;
    void AddressPlease(){
        cout<< name<<endl<<addr.country<<endl<<addr.stName<<endl<<addr.hNo<<endl;
    }
};
int main(){
    Person manav;
    manav.name = "Manav";
    manav.addr.country = "India";
    manav.addr.stName = "Nai abadi";
    manav.addr.hNo = 12;
    manav.AddressPlease();
    return 0;
}