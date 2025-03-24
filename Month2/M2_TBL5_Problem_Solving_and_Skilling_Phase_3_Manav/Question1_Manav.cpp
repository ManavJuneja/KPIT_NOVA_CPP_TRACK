#include<iostream>
#include<algorithm>
int main(){
    int size;
    std::cout<<"Enter size : ";
    std::cin>>size;
    std::cout<<"Enter the Array : ";
    int *arr = new int[size];
    for(int i = 0; i < size; i++){
        std::cin>>arr[i];
    }
    std::sort(arr,arr+size);
    std::cout<<"Sorted Array : ";
    for(int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
    delete[]arr;
    return 0;
}