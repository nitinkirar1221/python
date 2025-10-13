#include<iostream>
using namespace std;
#include<map>

int main(){
    map<string, int>marks;

    marks.insert({"ram",58});
     marks.insert({"rohit",58});
      marks.insert({"rahul",58});
      marks["krishna"] = 99;

      cout<<marks["ram"]<<endl;
       cout<<marks["rohit"]<<endl;
        cout<<marks["rahul"]<<endl;
         cout<<marks["krishna"]<<endl;

         for(auto mark : marks){
            cout<<mark.first << " => "<<mark.second<<endl;
         }
         if(marks.find("rohit")!=marks.end()){
            cout<<"marks of rohit is "<<marks["rohit"]<<endl;
         }
         else{
            cout<<"mot found";
         }
}