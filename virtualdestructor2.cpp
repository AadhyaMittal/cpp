#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"\n base class constructor ";
    }
    virtual ~base()
    {
        cout<<"\n base class destructor ";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout<<"\n derived class constructor ";
    }
    ~derived()
    {
        cout<<"\n derived class destructor ";
    }
};
int main()
{
    base *bptr=new derived();
    delete bptr;
}

