// finding the first non repeating element in the array //
#include <stdio.h>
int main(){
	int i,j,n,k,t;
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
			if(a[i]==a[j])
			   ;
		    else
			  printf("The first non repeating element is %d",a[i]);	   
		}
	}
}

