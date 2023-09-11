// program to figure out the type of triangle //
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the length of the sides of the triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c){
		printf("The triangle is equilateral");
		
	}
	else if((a==b) || (b==c) || (a==c)){
		printf("The triangle is isoceles");
	}
	else{
		printf("The triangle is scalene");
	}
	return(0);
}
