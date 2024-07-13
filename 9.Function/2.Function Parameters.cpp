#include<iostream>
using namespace std;

void myFunc(string name)
{
    cout<<"Welcome from "<<name<<".\n";
}
int main()
{
    cout<<"Hello!from main function.\n";
    myFunc("Amjad");
    myFunc("Ayman");


    return 0;
}
