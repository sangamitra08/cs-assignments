// pattern 7//
#include <stdio.h>
int main(){
	int i,j,s,n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(s=0;s<n-i-1;s++)
		   printf(" ");
		for(j=5;j<n;j)
		   printf("* ");
		printf("\n");      
	}
	return(0);
}
