// program to calculate the area of a square//
#include <stdio.h>
int main(){
	int side;
	printf("Enter the length of the side of a square:");
	scanf("%d",&side);
	int area= side*side;
	printf("The area of a square is: %d",area);
	return 0;
}

