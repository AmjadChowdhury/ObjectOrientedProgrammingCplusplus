#include<iostream>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout<<food<<endl;  //Pizza
    cout<<&meal<<endl; //0x61fde0
    cout<<meal<<endl;  //Pizza

    return 0;
}
