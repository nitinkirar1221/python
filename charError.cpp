#include<iostream>
using namespace std;

int main(){
     
    int a;
    int b;
    cout<<"enter the number of a :";
    cin>>a;
    cout<<"enter the number of b :";
    cin>>b;
    try{
        if(a  != 0){
            cout<<b/a<<endl;
        }
        else if(a == 0){
            throw "cant devided by zero \n";
        }
        else{
            throw "character not allowed\n";

        }
    }
    catch(const char* x){
        cout<<x<<endl;
        }

}