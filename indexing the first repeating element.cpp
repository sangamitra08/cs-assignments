// finding index of first repeating element //
#include <stdio.h>
int main(){
	int i,j,n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values in any order: ");
	for(i=0;i<n;i++){
		printf("Element %d: ",i);
	    scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				printf("The first number that repeats is: %d",a[i]);
				break;
        	}
		}
	}
	return(0);
}
