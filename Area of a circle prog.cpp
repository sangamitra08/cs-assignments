// Program to find area of a circle//
#include <stdio.h>
int main(){
	float rad;
	printf("Enter the radius of the circle:");
	scanf("%f",&rad);
	float pi= 3.14;
	float area= pi*rad*rad;
	printf("The area of the circle is %f",area);
	return 0;
	
}
