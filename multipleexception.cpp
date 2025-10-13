#include<iostream>
using namespace std;

int main(){
    int balance = 1000;
    int deposite;
    int withdraw;
    try{
        cout<<"enter a amount :";
        cin>>deposite;
        if(deposite == 0){
            throw "invalid ammount";
        }
        balance = balance + deposite;
        cout<<"balance :"<<balance<<endl;
        cout<<"enter a amount for withdraw::";
        cin>>withdraw;
        if(balance < withdraw){
            throw "insufficient balance";

        }
        balance = balance - withdraw;
        cout<<"balance :"<<balance<<endl;

    }
    catch(const char* msg){
        cout<<msg;
    }
}

