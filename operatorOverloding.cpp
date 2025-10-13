#include<iostream>
using namespace std;
 
class Operator{
public:
int a = 0;
int operator+()
{
    a++;
}
int operator-(){
    a--;
}
int dis(){
    cout<<"a = "<<a<<endl;

}
};
int main()
{
    Operator obj;
    +obj;
    +obj;
    obj.dis();
    -obj;
    obj.dis();
}
