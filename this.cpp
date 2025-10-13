#include<iostream>
using namespace std;

class test{
    public:
    int a = 10;
    int b = 12;

    void dis(int a, int b){
        cout<<"this-> a ="<<this ->a<<endl;
        cout<<"this -> b ="<<this ->b<<endl;
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;

    }
   

};
int main(){
    test obj;
    obj.dis(3,4);
}