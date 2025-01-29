#include <stdio.h>

int main() {
    int num;
 
    scanf("%d", &num);
    int i;
    i = 2;
    int bs;
    bs = 1;
    if(num < 2){
        printf("NO");
        return 0;
    }
    while(i * i <= num){
        if(num % i == 0){
            bs = 0;
            break;
        }
        i++;
    }
    if(bs){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    
    return 0;
}

