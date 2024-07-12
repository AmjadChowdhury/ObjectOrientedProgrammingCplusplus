#include<iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string* ptr = &food;

    cout<<food<<endl;  //Pizza
    cout<<ptr<<endl;   //0x61fde0
    cout<<&food<<endl; //0x61fde0
    cout<<*ptr<<endl;  //Pizza

    *ptr = "Burger";
    cout<<food<<endl;

    return 0;
}
