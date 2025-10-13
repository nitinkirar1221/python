#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v1;

    for(int i=0; i < 20; i++)
    {
        v1.push_back(i+1);
    }
    v1.pop_back();

    cout<<"size of vector v1 "<<v1.size()<<endl;

    vector<int>::iterator it;
    for(it = v1.begin(); it != v1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    for(int i = 0; i < v1.size(); i++){
        cout<<v1.at(i)<<" ";
    }
}
