// program to count and print the frequency of each element in an array //
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
		int count=0;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				count+=1;
				printf("number of times the element %d repeats is: %d\n",a[i],count);
			}
		}
	}
	return(0);
}
