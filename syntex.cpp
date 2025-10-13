#include<iostream>
using namespace std;



class student{
    public:
    string studentname;
    int rollnumber;
    int age;
    
    void display() {
    
    cout<<"student name :"<<studentname<<", roll number:"<<rollnumber<<", age :"<<age<<endl;
cout<<endl;
}

      
};



int main(){
    student obj;
    obj.studentname = "nitin";
    obj.rollnumber = 26362526;
    obj.age = 22;
    obj.display();

    return 0;
}