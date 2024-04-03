#include<stdio.h>

    void main(){
    int a,b,c;
    printf("enter the values of sides a\nb\nc");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c){
        printf("equilateral");
        }
        else if("a==b&&b!=c"){
            printf("isoscles") ;
    }
    else {
        printf("scalene");

    }

    

}