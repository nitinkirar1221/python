#include<iostream>
using namespace std;

class test{
    public:
    int a = 0;
    int operator+();
    int operator-();
    int dis(){
        cout<<"a ="<<a<<endl;
    }
    
    

};

   int test::operator+(){
    a++;

   }
   int test::operator-(){
    a--;
   }
   int main(){
    test obj;
    +obj;
    +obj;
    obj.dis();
    -obj;
    obj.dis();
  
}
   