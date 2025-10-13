#include<iostream>
using namespace std;
#include<array>

class student{
    public:
    string name;
    int age;

    void detail(){
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your age";
        cin>>age;
    }
    void display()
    {
        cout<<"\n name =:"<<name<<"age=:"<<age<<endl;
    }

};
int main()
{
    student st[3];


    for(int i=0;i<3;i++)
    {
        cout<<" enter detail for student"<<i+1<<endl;
        st[i].detail();
    }
    for(int i=0;i<3;i++)
    cout<<" enetr detail for student"<<i+1<<endl;

}
