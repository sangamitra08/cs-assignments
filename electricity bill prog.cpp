// program to calculate electricity bill//
#include <stdio.h>
int main(){
	int charge, cost, units;
	printf("Enter the number of units");
	scanf("%d",&units);
	// let one unit have 100 c charge//
	charge= units*100;
	//let cost sur charge be 10//
	cost= charge*10;
	printf("The elecricity bill is: %d",cost);
	return(0);
	
}
