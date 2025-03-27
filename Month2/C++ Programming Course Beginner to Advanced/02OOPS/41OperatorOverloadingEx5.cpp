#include<iostream>
#include<string>
using namespace std;
class Cart{
    public:
        string items[4];
        Cart(string item1, string item2, string item3, string item4){
            items[0]=(item1);
            items[1]=(item2);
            items[2]=(item3);
            items[3]=(item4);  
        }
        string operator[](int index){
            return items[index];
        }
};
int main(){
    Cart fruit("Banana", "Apple", "Mango", "Grapes");
    cout<<fruit[3];
}