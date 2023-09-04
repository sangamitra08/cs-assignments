// program to do all arithmetic functions in a single program//
#include <stdio.h>
int main() {
	int a,b;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	int sum= a+b;
	int diff= a-b;
	int prod= a*b;
	int div= a/b;
	printf("The sum of the two numbers is: %d",sum);
	printf("The difference of two nos is: %d", diff);
	printf("The product of two nos is: %d",prod);
	printf("The value when the two nos are divided: %d",div);
	return 0;
	
}
