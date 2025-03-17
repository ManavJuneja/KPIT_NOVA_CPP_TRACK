//statement is basic unit of compulation in a C++ program 
//Every C++ program is a collection of statement organized in a certain way to achive same goal
//statement end with semicolon in c++ (;)

#include<iostream>

int addNumber(int a, int b){
    int sum = a + b;
    return sum;
}
int main(){
    int firstNumber = 12;
    int secondNumber = 8;
    int ans;
    ans = addNumber(firstNumber, secondNumber);
    std::cout<<ans;
}