#include<iostream>
#include<string>

int main(){
    //clog use for logging message
    //Buffered output may be delay until buffer is flushed
    // std::clog<<"Program is Started..."<<std::endl;
    // int age;//declaration
    // int b = 10;//initilization

    // std::cout<<"Hello!";//print data to the console(terminal)
    // std::cin>>age;
    // if(age < 0){
    //     //cerr Use to print error
    //     std::cerr<<"Errorr : Age cannot be negative"<<std::endl;
    // }

    int age2;
    std::string fullName;
    std::cout<<"Enter your full name : "<<std::endl;
    getline(std::cin,fullName);
    std::cout<<"Type in your age"<<std::endl;
    std::cin>> age2;

    
    
    std::cout<<"Hello "<<fullName<<" your age is "<<age2<<std::endl;
   

    
}