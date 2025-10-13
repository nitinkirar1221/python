#include<iostream>
using namespace std;

int main(){
    int *p = new int[10];

    for(int i=0; i<10; i++)
    {
        p[i] = i+1;
        // *(p+i) = i+1;
    }
    for(int i=0; i<10; i++){
        cout<<"value at index " <<i<<" is :"<<p[i]<<endl;
    }
    delete []p;
}