#include<iostream>
using namespace std;
#include<list>

int main(){
    list<int> lst{2,3,4,5,6,7,8,9};

    lst.push_back(1);
    //.push_front(3);

    lst.pop_back();

    for(int x : lst){
        cout<<x<<" ";
    }

}

