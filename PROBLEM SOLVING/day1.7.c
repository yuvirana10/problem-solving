#include<stdio.h>

    void main(){
    int temp;
    printf("enter the temperature\n");
    scanf("%d",&temp);
    if(temp<0){
        printf("extreme cold");
     }
     else if(0<=temp&&temp<=10){
        printf("cold");
        }
        else if(10<temp&&temp<=30){
        printf("medium");

        }else if(30<temp&&temp<=50){
        printf("hot");
        }
        else{
            printf("very hot");

        }


}