#include<iostream>
using namespace std;

#include<array>

class student{
    public:
    string studentname;
    int rollnumber;
    

    void detail(){
        cout<<"enter name :";
        cin>>studentname;
        cout<<"rollnumber :";
        cin>>rollnumber;

    }
    void display(){
        cout<<"studentname :"<<studentname<<"rollnumber :"<<rollnumber<<endl;  
     }
        

};
int main(){
    student st[10];
    int a= 5;

    for(int i=0;i<10;i++){
        cout<<"\n enter detail of student"<<i+1<<endl;
        st[i].detail();
    }
    for(int i=0;i<10;i++)
    {
        cout<<"\n detail for student"<<i+1<<endl;
        st[i].display();
    }
    
}