#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n, i, j, sum = 0;
    ;
    cout << "enter the number upto which series will be printed\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        int fact = 1;
        for (j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + fact;
    }
    cout << sum;
    return 0;
}