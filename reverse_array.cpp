//To print array elements in reverse

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int size, i;
    cin >> size;
    int arr[size];
    for(i = 0; i < size; i++)
    {
        cin >> arr[i];    
    }
    for(i = size -1; i >= 0; i--)
    {
        cout << arr[i] << " ";    
    }
    return 0;
}
