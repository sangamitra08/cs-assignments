#include <stdio.h>
int main(){
    int year,month;
    printf("Enter the year:");
    scanf("%d",&year);
    printf("Enter the month in number,eg: jan=1:");
    scanf("%d",&month);
    if (year%4==0 && (year%100!=0 || year%400==0)){
        if(month==1|| month==3|| month==5|| month==7||month==8||month==10||month==12){
            printf("The number of days in the month is 31.");
        }
        else if (month==2){
            printf("The number of days is 29.");
        }
        else {
            printf("The number of days is 30.");
        }
          
    }
    else{
        if(month==1|| month==3|| month==5|| month==7||month==8||month==10||month==12){
            printf("The number of days is 31.");
        }
        else if (month==2){
            printf("The number of days is 28.");
        }
        else{
            printf("The number of days is 30.");
        }

    }
    return(0);
}