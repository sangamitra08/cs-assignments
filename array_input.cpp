// array_two //
#include <stdio.h>
int main(){
   int i,n,j;
   int a[5]={};
   for(i=0;i<5;i++){
   	  printf("Enter the value: ");
   	  scanf("%d",&n);
   	  a[i]=n;
   }
   for(j=0;j<5;j++){
   	printf("\n %d",a[j]);
   }
   return(0);
}
