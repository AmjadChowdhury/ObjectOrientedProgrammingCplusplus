#include<iostream>
using namespace std;

struct{
    int num;
    string name;

} myStruct;

int main()
{
    myStruct.num = 10;
    myStruct.name = "Amjadul Alam";

    cout<<"Num : "<<myStruct.num<<", Name : "<<myStruct.name<<endl;

    return 0;
}
