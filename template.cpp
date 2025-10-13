#include<iostream>
using namespace std;

template <class T>
class data
{
    public:
    data(T a)
    {
        cout<<"the value of a is =:"<<a<<endl;
    }
};
int main()
{
    data<char>obj('a');
    data<int>obj2(53);
    data<float>obj3(44.55);
    data<string>obj4("ram");
}
