#include<iostream>
using namespace std;
class base
{
    int x;
public:
    virtual void getdata()
    {
        cout<<"Enter x: ";
        cin>>x;
    }
    virtual void show()
    {
        cout<<x;
    }
};
class derived:public base
{
    int y;
public:
    virtual void getdata()
    {
        cout<<"Enter y: ";
        cin>>y;
    }
    virtual void show()
    {
        cout<<y;
    }
};
int main()
{
    base b,*p;
    derived d;
    p=&b;
    p->getdata();
    p->show();
    p=&d;
    p->getdata();
    p->show();
}
