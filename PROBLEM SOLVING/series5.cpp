#include<iostream>
#include<math.h>

using namespace std;
    int main(){
     int n, i, j,x, sum = 0,result;
    
    cout << "Enter the number upto which series will be printed\n";
    cin >> n;
    for (i = 1; i <= n; i+2){
          int fact = 1;
        for (j = 1; j <= i; j+2)
        {
            fact=fact*j;

    }
       sum = sum+(pow(x,i)/fact);
result=sum*pow()
return 0;
}