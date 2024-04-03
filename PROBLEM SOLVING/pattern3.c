#include<stdio.h>

    void main(){
    int n,r,c;
    char k;
    printf("enter the no. of rows ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            k=64+r;
            printf("%c",k);
        }
        printf("\n");
    }

}