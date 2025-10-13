#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;
    student(){
        name = "nitin";
        age = 22;
        cout<<"constuctor called"<<endl;
    }
    student(string a, int b)
    {
        name = a;
        age = b;
        cout<<"constructor called"<<endl;

    }
    void display()
    {
        cout<<"name:"<<name<<" age :"<<age<<endl;

    }

};
int main()
{
    student obj("nitin" 22);
    obj.display();
}