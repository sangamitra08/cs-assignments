// array problems //
# include <stdio.h>
int main(){
	int i,j,sum,n;
	float avg;
	int a[5]={10,90,60,40,30};
	for(i=0;i<5;i++){
		int n=a[i];
	    sum=sum+n;    
	}
	avg= sum/5;
	printf("average is %f",avg);
	return(0);
	
}
