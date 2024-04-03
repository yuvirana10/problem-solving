#include<stdio.h>

    void main(){
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    if(year%4==0 && year%100==0 || year%400==0)
{
    printf("entered year is leap year",year);
}
else {
    printf("entered year is not leap year",year);
}
