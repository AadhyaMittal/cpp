//THIS IS A 2-D ARRAY QUES GIVEN IN ARRAYS ON HACKER RANK

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    int arr[6][6];
    int sum, max_sum = -100, i, j;
    for(i = 0; i < 6; i++)
    {
       for(j = 0; j < 6; j++)
       {
          cin >> arr[i][j];
       }
    }
    for(i = 1; i < 5; i++)
    {
       for(j = 1; j < 5; j++)
       {
          if(arr[i][j] != 0)
          {
              sum = arr[i][j] + arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] +
                    arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1]; 
              if(sum > max_sum)
              {
                  max_sum = sum;
              }
          }
       }
    }
    cout << max_sum;
    return 0;
}
