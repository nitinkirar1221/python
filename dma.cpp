#include<iostream>
using namespace std;

int main(){
    int *p;
    p = new int;
    cout<<"enter a number:";
    cin>>*p;
    cout<<*p<<endl;
    delete p;
    cout<<*p<<endl;
}