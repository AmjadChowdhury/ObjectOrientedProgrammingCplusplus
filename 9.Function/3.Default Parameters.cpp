#include<iostream>
using namespace std;

void myFunc(string name = "Tasnim")
{
    cout<<"Welcome from "<<name<<".\n";
}
int main()
{
    cout<<"Hello!from main function.\n";
    myFunc("Amjad");
    myFunc();
    myFunc("Chowdhury");


    return 0;
}

