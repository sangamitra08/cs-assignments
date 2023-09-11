// program to calculate grade of a student//
#include<stdio.h>
int main(){
	int math,phy,chem,bio,comp,marks;
	printf("Enter the math, physics, chemistry, biology and computer marks in the same order:");
	scanf("%d %d %d %d",&math,&phy,&chem,&bio,&comp);
	marks=( math+phy+chem+bio+comp);
	printf("%d",marks);
	float percent= marks/5;
	if(percent>=90){
		printf("The grade is A");
	}
	else if(percent>=80){
		printf("The grade is B");
	}
	else if(percent>=70){
		printf("The grade is C");
	}
	else if(percent>=60){
		printf("The grade is D");
	}
	else if(percent>=40){
		printf("The grade is E");
	}
	else{
		printf("The grade is F");
	}
	return(0);
}

