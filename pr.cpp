#include<iostream>
using namespace std;
class complex
{
        int real;
        int imaginary;
    public:
        void get(int r,int i)
        {
            real=r;
            imaginary=i;
        }
        void sum(complex c1,complex c2)
        {
            real=c1.real+c2.real;
            imaginary=c1.imaginary+c2.imaginary;
        }
        void diff(complex c1,complex c2)
        {
            real=c1.real-c2.real;
            imaginary=c1.imaginary-c2.imaginary;
        }
        void display()
        {
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
};
int main()
{
    complex c1,c2,c;
    c1.get(5,3);
    c2.get(3,5);
    c.sum(c1,c2);
    c.display();
    c.diff(c1,c2);
    c.display();
}

