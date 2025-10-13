#include<iostream>
using namespace std;

class xyz;
{
public:
 
xyz()
{
    cout<<"defult constructor ";

}
xyz(const xyz &obj)
{
    cout<<"copy constructor called ";
}
};
int main()
{
    xyz obj;
    xyz obj2 = obj;

    return 0;
}