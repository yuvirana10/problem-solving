#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, den, num1, result1, num2, result2;
    cin >> a >> b >> c;
    num1 = b + pow((b * b - 4 * a * c), 0.5);
    den = 2 * a;
    result1 = num1 / den;
    num2 = b - pow((b * b - 4 * a * c), 0.5);
    result2 = num2 / den;
cout<<result1<<"  "<<result2;
    return 0;
}