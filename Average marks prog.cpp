// program to calculate percentag of a student given 5 subjects//
#include <stdio.h>
int main(){
int math, phy, chem, eng, cs;	
printf("Enter math marks:");
scanf("%d",&math);
printf("Enter physics marks:");
scanf("%d",&phy);
printf("Enter chemistry marks:");
scanf("%d",&chem);
printf("Enter english marks:");
scanf("%d",&eng);
printf("Enter computer science marks:");
scanf("%d",&cs);
float avg= (math+phy+chem+eng+cs)/5;
printf("The percentage is: %f",avg);
return 0;

}

