#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char* s) {
    int leftSide = 0; 
    int rightSide = strlen(s) - 1;

    while (leftSide < rightSide) {
        while (leftSide < rightSide && !isalnum(s[leftSide])) {
            leftSide++;
        }
        while (leftSide < rightSide && !isalnum(s[rightSide])) {
            rightSide--;
        }
        if (tolower(s[leftSide]) != tolower(s[rightSide])) {
            return false;
        }
        leftSide++;
        rightSide--;
    }
    return true;
}

int main() {
    char str1[] = "A man, a plan, a canal: Panama";
    char str2[] = "race a car";
    char str3[] = " ";
    char str4[] = "No 'x' in Nixon";

    printf("Test 1: %s -> %s\n", str1, isPalindrome(str1) ? "true" : "false");
    printf("Test 2: %s -> %s\n", str2, isPalindrome(str2) ? "true" : "false");
    printf("Test 3: \"%s\" -> %s\n", str3, isPalindrome(str3) ? "true" : "false");
    printf("Test 4: %s -> %s\n", str4, isPalindrome(str4) ? "true" : "false");

    return 0;
}

