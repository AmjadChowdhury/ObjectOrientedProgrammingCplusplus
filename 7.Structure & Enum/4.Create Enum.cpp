#include<iostream>
using namespace std;

enum Level{
    LOW = 5,
    MEDIUM,
    HIGH
};

int main()
{
    enum Level myVar = LOW;
    cout<<myVar<<endl; //5

    myVar = MEDIUM;
    cout<<myVar<<endl; //6

    myVar = HIGH;
    cout<<myVar<<endl; //7

    return 0;
}
