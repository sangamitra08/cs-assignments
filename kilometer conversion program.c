/*prog to convert kilometer to meter, centi meter and milli meter*/
#include <stdio.h>
int main(){
    int km,m,mm,cm;
    printf("Enter the value in kilometer:");
    scanf("%d",&km);
    m=km*1000;
    cm=km*100000;
    mm=km*1000000;
    printf("The value of the input in meter, centimeter, millimeter are: %d %d %d",m,cm,mm);
    return(0);
}
