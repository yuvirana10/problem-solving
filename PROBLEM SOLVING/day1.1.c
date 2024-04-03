#include<stdio.h>

    int  main(){
    int basic,da,hra,allow,pf,total;
    char grade;
    printf("enter the basic salary\n");
    scanf("%d",&basic);
    printf("enter the grade as character\n");
    scanf("\n%c",&grade);
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(grade=='A'){/
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    total=basic+hra+da+allow-pf;
    printf("total=%d",total);
    }

    