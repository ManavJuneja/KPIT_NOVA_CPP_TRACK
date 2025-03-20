#include<iostream>
#include<vector>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"Animal Speaks"<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Dog Speaks"<<endl;
    }
};
class Cat : public Animal{
    public:
    void speak(){
        cout<<"Cat Speaks"<<endl;
    }
};
class Cow : public Animal{
    public:
    void speak(){
        cout<<"Cow Speaks"<<endl;
    }
};
class Horse : public Animal{
    public:
    void speak(){
        cout<<"Horse Speaks"<<endl;
    }
};
class Goat : public Animal{
    public:
    void speak(){
        cout<<"Goat Speaks"<<endl;
    }
};
class Sheep : public Animal{
    public:
    void speak(){
        cout<<"Sheep Speaks"<<endl;
    }
};
int main(){
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Cow());
    animals.push_back(new Horse());
    animals.push_back(new Goat());
    animals.push_back(new Sheep());

    for(int i = 0; i < animals.size(); i++){
        animals[i]->speak();
    }
    return 0;

}