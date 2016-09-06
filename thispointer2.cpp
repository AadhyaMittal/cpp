#include<iostream>
using namespace std;
class sample
{
        int a;
        int b;
    public:
        void setdata(int a,int b)
        {
            this->a=a;
            this->b=b;
        }
        void showdata()
        {
            cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
        }
};
int main()
{
    sample s1;
    s1.showdata();
    s1.setdata(12,15);
    s1.showdata();
    s1.showdata();
}
