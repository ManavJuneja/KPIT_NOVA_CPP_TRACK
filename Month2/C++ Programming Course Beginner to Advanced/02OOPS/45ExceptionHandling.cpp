#include<iostream>

using namespace std;
class Customer{
    string name;
    int balance, accountNumber;

    public:
    Customer(string name, int balance, int accountNumber){
        this->name = name;
        this->balance = balance;
        this->accountNumber = accountNumber;
    }
    void credit(int amount){
        if(amount > 0){
            balance+= amount;
            cout<<"Amount "<<amount<<" Credited\n";
        }else{
            throw runtime_error("Amount is invalid\n");
        }
    }
    void debit(int amount ){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<"Amount "<<amount<<" Debited\n";
        }else if(balance< amount){
            cout<<"Insufficiant Balance\n";
        }else{
            cout<<"Invalid Amount";
        }
    }
    void displayBalance(){
        cout<<"Balance : "<<balance<<endl;
    }
};
int main(){
    Customer c1("aman", 4000, 12345);
    try{
    c1.credit(200);
    c1.displayBalance();
    c1.debit(-22);
    }catch(const runtime_error &e){
        cout<<"Exception Occured : "<<e.what()<<endl;
    }



}