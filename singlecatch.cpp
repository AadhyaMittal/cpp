#include<iostream>
using namespace std;
main()
{
    int x,y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    try
    {
        if(y==0)
        {
            throw 10;
        }
        cout<<"Division is "<<x/y;
    }
    catch(int i)
    {
        cout<<"Division not possible ";
    }
}
