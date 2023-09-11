// program to calculate salary of an employee//
#include <stdio.h>
int main(){
	float msalary,da,hra;
	printf("Enter the value of the basic salary:");
	scanf("%f",&msalary);
	printf("Enter the percentage of da:");
	scanf("%f",&da);
	printf("Enter the percentage of hra:");
	scanf("%f",&hra);
	float salary= msalary+((da/100)*msalary)+((hra/100)*msalary);
	printf("The final salary is: %f",salary);
	return(0);
}
