#include<iostream>
using namespace std;
int x = 10;
void func()
{
    cout<<x<<endl;
    x++;
}

int main()
{
    cout<<x<<endl; // 10
    func(); // 10
    x+=10;
    cout<<x<<endl; //21
    func(); // 21
    cout<<x<<endl; // 22

    return 0;
}
