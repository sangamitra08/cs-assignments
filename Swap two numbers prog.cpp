//program to swap two numbers//
#include <stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	int t=a;
	a=b;
	b=t;
	printf("The value of a is: %d",a);
	printf("The value of b is: %d",b);
	return 0;
}
