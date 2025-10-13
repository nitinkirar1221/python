#include<iostream>
using namespace std;
#include<fstream>

int main(){
    char name[30];
    int age;
    ofstream out("nitin.txt");
    cout<<"enter your name::";
    cin>>name;
    cout<<"enter your age::";
    cin>>age;

    out<<"my name is "<<name<<endl;
    out<<"my age is "<<age<<endl;

    out.close();
    return 0;
}