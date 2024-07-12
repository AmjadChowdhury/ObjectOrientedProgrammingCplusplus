#include<iostream>
using namespace std;

struct {
    int num;
    string name;
}myStruct1,myStruct2;

int main()
{
    myStruct1.num = 10;
    myStruct1.name = "Neymar JR.";

    myStruct2.num = 7;
    myStruct2.name = "Cristiano Ronaldo.";

    cout<<"Player Name : "<<myStruct1.name<<",Jersy Number : "<<myStruct1.num<<endl;
    cout<<"Player Name : "<<myStruct2.name<<",Jersy Number : "<<myStruct2.num<<endl;

    return 0;
}
