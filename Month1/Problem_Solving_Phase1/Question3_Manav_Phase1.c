#include <stdio.h>
#include<math.h>
int main() {
    float height = 1.82;
    float weight = 72;
    float BMI;
    BMI = weight / pow(height,2);
    printf("%f",BMI);
    
    return 0;
}

