#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        char name[10];
    public:
        void get();
        void display();
};
void student::get()
{
    cout<<"Enter roll number ";
    cin>>roll;
    cout<<endl;
    cout<<"Enter the name";
    cin>>name;
    cout<<endl;
}
void student :: display()
{
    cout<<"The roll number is "<<roll<<endl;
    cout<<"The name is "<<name<<endl;
}
int main()
{
    student s1,s2;
    s1.get();
    s1.display();
    s2.get();
    s2.display();
}
