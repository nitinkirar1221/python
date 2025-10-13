#include<iostream>
using namespace std;
#include<fstream>

int main()
{
ifstream in;
char data;

in.open("example.txt",ios::in | ios::out);
if(!in){
    cout<<"file is not open \n";
}
else{
    cout<<"file is open \n";
}
//cout<<"last char of the file \n";
//in.seekg(-1,ios::end);
//in>>data;
int count = 0;
int i = 0;
while(in.eof()==0)
{
    in.seekg(i, ios::beg);
    in>>data;
    cout<<data;
    if(data == 'e'){
        count++;
    }
    i++;
}
cout<<"current char of the file \n";
in.seekg(0, ios::cur);
in>>data;
cout<<data;
//count<<"count of e is ="<<count;
while(in.eof() == 0);
}
