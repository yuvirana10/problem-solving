#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, i, j,x, sum = 0;
    
    cout << "enter the number upto which series will be printed\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
            x=fact/i;
        }
        sum = sum + x;
    }
    cout << sum;
    return 0;
}