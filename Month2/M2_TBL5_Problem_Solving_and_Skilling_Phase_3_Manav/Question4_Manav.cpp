#include<iostream>
#include<cstring>
using namespace std;
void toUpperCase(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
}
void removeVowels(char str[]){
    int j = 0;
    for(int i = 0; str[i] != '\0';i++){
        if((strchr("AEIOU",str[i])==NULL)&&(strchr("aeiou",str[i])==NULL)){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
void revString(char str[]){
    int len = strlen(str);
    for(int i = 0; i < len/2; i++){
        swap(str[i], str[len - i -1]);
    }
}
int main(){
    char str[100];
    cout<<"Enter the string : ";
    cin.getline(str,100);
    
    toUpperCase(str);
    removeVowels(str);
    revString(str);

    cout<<"String after modification : "<<str<<endl;
    return 0;

}