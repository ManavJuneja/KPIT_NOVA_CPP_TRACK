#include<iostream>

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
};
int main(){
    int num1, num2;
    std::cout<<"Enter Num 1 : ";
    std::cin>>num1;
    std::cout<<"Enter Num 2 : ";
    std::cin>>num2;
    std::cout<<"Befor Swap"<<std::endl;
    std::cout<<"Num 1 : "<<num1<<" Num 2 : "<<num2<<std::endl;
    swap(&num1, &num2);
    std::cout<<"After Swap"<<std::endl;
    std::cout<<"Num 1 : "<<num1<<" Num 2 : "<<num2<<std::endl;
    return 0;
}