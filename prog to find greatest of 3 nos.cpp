//program to print the greatest of 3 numbers//
#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the values of 3 numbers a,b,c with a comma in between:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("a is the greatest integer, which is: %d",a);
	}
	else if(b>a && b>c){
		printf("b is the greatest integer, which is: %d",b);
	}
	else{
		printf("c is the greatest integer, which is: %d",c);
	}
	return(0);
}

