#include<iostream>
using namespace std;

int main()
{
    string food = "Mango";
    string &meal = food;

    cout<<food<<endl;
    cout<<&meal<<endl;
    cout<<meal<<endl;

    return 0;
}