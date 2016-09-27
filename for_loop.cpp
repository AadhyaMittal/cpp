/* Input Format

You will be given two positive integers,a  and b (a <= b), separated by a newline.

Output Format

For each integer n (so all numbers in that range):

If , n <= 9 then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
Else if n > 9 and it is even, then print "even".
Else if n > 9 and it is odd, then print "odd". */

#include <iostream>
#include <cstdio>
using namespace std;

int main() 
{
    // Complete the code.
    int x, y, i;
    cin >> x >> y;
    for(i = x; i <= y; i++)
    {
        if(i == 1)
            cout << "one";
        else if(i == 2)
            cout << "two";
        else if(i == 3)
            cout << "three";
        else if(i == 4)
            cout << "four";
        else if(i == 5)
            cout << "five";
        else if(i == 6)
            cout << "six";
        else if(i == 7)
            cout << "seven";
        else if(i == 8)
            cout << "eight";
        else if(i == 9)
            cout << "nine";
        else
        {
            if(i % 2 == 0)
                cout << "even";
            else
                cout << "odd";
        }
        cout << endl;
    }
    return 0;
}
