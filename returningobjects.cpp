#include<iostream>
using namespace std;
class complexnumber
{
        float realpart;
        float imaginarypart;

    public:
        void setcomplexnumber(float real,float imaginary)
        {
            realpart=real;
            imaginarypart=imaginary;
        }
        void displaycomplexnumber()
        {
            cout<<realpart<<"+i"<<imaginarypart<<endl;
        }
        complexnumber addcomplexnumber(complexnumber n1)
        {
            complexnumber temp;
            temp.realpart=realpart+n1.realpart;
            temp.imaginarypart=imaginarypart+n1.imaginarypart;
            return temp;
        }
};
int main()
{
    complexnumber n1,n2,n3;
    n1.setcomplexnumber(1.2,2.5);
    n2.setcomplexnumber(2.0,52);
    n3=n1.addcomplexnumber(n2);
    n3.displaycomplexnumber();
    return 0;
}
