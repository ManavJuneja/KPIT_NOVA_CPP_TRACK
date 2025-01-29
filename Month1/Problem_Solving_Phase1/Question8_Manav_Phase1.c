#include<stdio.h>
#include<string.h>
#include<ctype.h>
int lengthOfLastWord(char* s) {
    int length = 0, i;
    int n = strlen(s);
    i = n - 1;
    while(i >= 0 && isspace(s[i])){
        i--;
    }
    while(i >= 0 && !isspace(s[i])){
        length++;
        i--;
    }
    return length;
}
int main(){
	char s[]= "Hello KPIT  ";
	int length = lengthOfLastWord(s);
	printf("Length is %d\n",length);
	return 0;
}
