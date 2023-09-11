// program to check if 3 numbers are equal or not//
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the values of 3 integers with space in between:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c){
		printf("The 3 numbers are equal");
	}
	else{
		printf("The 3 numbers are not equal");
	}
	return(0);
	}
