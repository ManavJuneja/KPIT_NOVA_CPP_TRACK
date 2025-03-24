#include<iostream>
using namespace std;

int main(){

    int size;
    cin>>size;
    int* arr= new int[size];

    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    int *ptr = arr;
    cout<<"Print the address of first element or 0 index"<<endl;
    //Print the address of first element or 0 index
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;

    //Print the address of second element or 1 index
    cout<<"Print the address of second element or 1 index"<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //Print the value of 0 index
    cout<<"Print the value of 0 index"<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<*ptr<<endl;

    //All address ko print kar do
    cout<<"All address ko print kar do"<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr+i<<endl;
    }

    //All the value
    cout<<"All the value"<<endl;
    for(int i = 0; i < size; i++){
        cout<<*(arr+i)<<endl;
    }

    
}