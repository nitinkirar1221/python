#include<iostream>
using namespace std;

template <class T>

T data (T a)

    {
        cout<<"the value of a is =:"<<a<<endl;
    }
int main()
{
    data('a');
    data(53);
    data(44.55);
    data("ram");
}
