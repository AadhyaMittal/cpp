/*Input Format

Input consists of the following space-separated values: int, long, long long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. 
Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places. */

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
    // Complete the code.
    int x;
    long y;
    long long z;
    char a;
    float m;
    double n;
    cin >> x >> y >> z >> a >> m >> n;
    cout << x << endl << y << endl << z << endl << a << endl << std::fixed << std::setprecision(3) << m << endl << std::fixed << std::setprecision(9) << n ;
    return 0;
}
