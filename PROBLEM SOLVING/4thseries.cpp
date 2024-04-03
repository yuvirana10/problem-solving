#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, i, j, x;
     double sum = 1;
    cout<<"enter the value of x\n";
    cin>>x;
    cout << "enter the number upto which series will be printed\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        
        int fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact=fact*j;
        }
        if(i%2==0){
        sum = sum+(pow(x,i)/fact);
        }
        else{
               sum = sum-(pow(x,i)/fact);

        }
    }
    cout << sum;
    return 0;
}