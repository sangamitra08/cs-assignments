//program to input a new element onto the array //
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
	printf("Enter the element to be appended: ");
	scanf("%d",&k);
	int arr[n+1]={k};
	for(i=1;i<n+1;i++){
		arr[i]=arr[i]+a[i-1];
	}
	// sorting the elements in the array //
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			if(arr[i]>arr[i+1]){
				t=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	   printf("%d",arr[i]);
	  
	return(0);
	
	
}
