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
    cout<<myVar<<endl;

    myVar = MEDIUM;
    cout<<myVar<<endl;

    myVar = HIGH;
    cout<<myVar<<endl;

    return 0;
}
