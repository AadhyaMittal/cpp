#include<iostream>
using namespace std;
template<class type>
class array
{
private:
    type *arr;
    int size;
public:
    array(int n)
    {
        arr=new type[n];
        size=n;
    }
    void read();
    void print();
};
template<class type>
void array<type>::read()
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
template<class type>
void array<type>::print()
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    array<int>A(5);
    cout<<"Enter elements of A";
    A.read();
    A.print();
    array<char>B(4);
    cout<<"Enter characters for B";
    B.read();
    B.print();
}
