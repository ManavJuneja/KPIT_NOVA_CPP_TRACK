#include<iostream>

void printTwoDArray(int arr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void transposeTwoDArray(int arr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            std::swap(arr[i][j], arr[j][i]);
        }
    }
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {6,7,8}
    };
    printTwoDArray(arr);
    std::cout<<"Now Transposed Matrix"<<std::endl;
    transposeTwoDArray(arr);
    printTwoDArray(arr);
    return 0;
}