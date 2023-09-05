// program to calculate the cube root of a given number//
#include <stdio.h>
#include <math.h>
int main(){
    float a;
    printf("Enter the value of a:");
    scanf("%f",&a);
    float b= cbrt(a);
    printf("The cube root of a is: %f",b);
    return(0);
}