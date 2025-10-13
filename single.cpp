#include<iostream>
using namespace std;

class parent{
    public:
    string x = "parent";

    void parentDisplay(){
        cout<<"this is the "<<x<<" class \n";

    }

};
 class child :public parent{
    public:
    string y = "child";
    void ChildDisplay(){
        cout<<"this is the"<<y<<" class \n";
    }
 };
 class student :public child{
    public:
    string z = "student";
    void StudentDisplay(){
    cout<<"this is the z "<<z<<" class \n";
 }

};
 int main()
 {
    student obj;
    
    obj.parentDisplay();
    obj.ChildDisplay();
 }