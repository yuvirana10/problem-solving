#include<stdio.h>

    void main(){
    int day,month,year,total_days,netyear,net_days,feb_days,weekday;
    printf("enter the day\n enter the month\n enter the year ");
    scanf("%d%d%d",&day,&month,&year);
    netyear=year-2001;
    if(month==1 || month==3||month==5||month==7||month==8||month==10||month==12){
        net_days=31;
    }
     else (month==4||month==6||month==9||month==11);{
net_days=30;
   }
if(month>1){
  if (year%4==0&&year%100==0||year%400==0){
    printf("****leap year******");
    feb_days=29;

  }
  else{
    printf("*****not leap year******");
    feb_days=28;
  }
    }
    else {
        feb_days=0;
    }
  total_days=(netyear*365)+(month*net_days)+feb_days+day;
  weekday=total_days%7;
  if(weekday==0){
    printf("sunday");
 }

   else  if(weekday==1){
    printf("monday");

 } else  if(weekday==2){
    printf("tuesday");
    
 } else  if(weekday==3){
    printf("wednesday");
 } else  if(weekday==4){
    printf("thrusday");
    }
     else  if(weekday==5){
    printf("friday");
     }
     else  if(weekday==6){
    printf("saturday");
     }

}