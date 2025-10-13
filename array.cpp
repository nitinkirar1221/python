#include<iostream>
using namespace std;

class student
{
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
    cout<<"\n name = "<<name<<"age = "<<age<<endl;

  }
};
int main()
{
    student st[3];
    

    for(int i=0;i<3;i++)
    {
        cout<<"\n en(ter detail for student"<<i+1<<endl;
        st[i].detail();
    }

    for(int i=0;i<3;i++)
    {
        cout<<"\n Detail for student "<<i+1<<endl;

    }
}