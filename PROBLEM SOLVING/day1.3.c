#include<stdio.h>

    void main(){
    char ch;
    printf("enter the alphabet\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='o'||ch=='e'||ch=='u'||ch=='i'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'){
        printf("vowel");
    }
 
     else{
        printf("consonant");
    }
    }
