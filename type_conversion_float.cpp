/* You must print the following 3 lines:

A decimal representing of the fraction of positive numbers in the array.
A decimal representing of the fraction of negative numbers in the array.
A decimal representing of the fraction of zeroes in the array. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include <iomanip>
using namespace std;


int main()
{
    int n, pos_n = 0, neg_n = 0, zero_n = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
        if( arr[i] > 0)
            pos_n++;
        else if( arr[i] < 0)
            neg_n++;
        else
            zero_n++;
    }
    float pos, neg, zero;
    pos = (float)pos_n / n;
    neg = (float)neg_n / n;
    zero = (float)zero_n / n;
    cout << pos << endl << neg << endl << zero << endl;
    return 0;
}
