#include <stdio.h>
int main(){
    int year ,month, day, date;
    printf("Enter the value of the year:");
    scanf("%d",&year);
    printf("Enter the value of the month in numbers:");
    scanf("%d",&month);
    printf("Enter the day from 1-31 :");
    scanf("%d",&day);
    if (year%4==0 && (year%400==0 || year%100!=0))
        if (month==2){
            if (day<=28){
                day= day+1;
            }
            else if(day==29){
                day=1;
                month= month+1;
            }
            else{
                printf("Invalid date");
            }
        }
    
        else{
            if(month<=11 && day==31){
                month= month+1;
                day= 1;
            }
            else if(month==12 && day==31){
                month=1;
                year=year+1;
                day= 1;
            }
            else if((month==11 || month==12) && day<=30 ){
                day= day+1;
            }
        
        }
        
        
    else
            if (day<=30){
                day=day+1;
            }
            else if(day==31){
                day=1;
                
                if(month<=11){
                    month=month+1;
                }
                else if (month=12){
                    month=1;
                    year= year+1;
                }
                else{
                    printf("Invalid date");
                }

                
                
            }
    printf("The succesive date is: %d %d %d",day,month,year);
    return(0);            
        }

    
        
    
    

