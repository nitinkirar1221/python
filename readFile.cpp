#include<iostream>
using namespace std;
#include<fstream>

int main(){
    ifstream myfile("example.txt",ios::app);
    string filetext;

    while(getline(myfile,filetext)){
        cout<<filetext<<endl;
    }
    myfile.close();
    return 0;
}
