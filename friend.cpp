#include<iostream>
using namespace std;

class test{
    int x =20;
    int y =30;
    public:
    int a = 0;
    friend int ram(test obj);


};

int ram(test obj){
    cout<<"sum of x and y"<<obj.y/obj.x;
}
int main(){
    test obj;
    ram(obj);
}

