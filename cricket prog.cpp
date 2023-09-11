#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter the values for 3 techniques with a space in between:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("1st technique has maximum point value, which is: %d",a);
	}
	else if(b>a && b>c){
		printf("2nd technique has maximum point value, which is:, which is: %d",b);
	}
	else if(a==b && b==c){
		printf("All 3 techniques have the max point value which is: %d",a);
	}
	else{
		printf("3rd technique has maximum point value, which is: %d",c);
	}
	return(0);
}

