#include<iostream>
using namespace std;

class test{
    public:
    int a = 0;
    static int studentCount;
    test(){
        studentCount++;
        a++;
    }
    static void studentCountShow(){
        cout<<"student count ="<<studentCount<<endl;

    }
    void dis(){
        cout<<"value of a = "<<a<<endl;

    }

};
int test::studentCount = 0;
int main(){
    test obj,obj2,obj3,obj4;
    obj4.studentCountShow();
    obj4.dis();
    obj3.dis();
    


}