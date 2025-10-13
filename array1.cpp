#include<iostream>
using namespace std;
#include<array>

int main(){
    array<int, 20> arr;
    for(int i = 0; i < 20; i++)
    {
        arr[i] = i+1;
    }
    for(int i=0; i < 20; i++)
    {
        cout<<"value at index "<<i<<" is "<<arr[i]<<endl;
    }
    cout<<"\n some details function is array::- \n";

    cout<<"index at::"<<arr.at(12)<<endl;
    cout<<"front::"<<arr.front()<<endl;
    cout<<"back::"<<arr.back()<<endl;


    }