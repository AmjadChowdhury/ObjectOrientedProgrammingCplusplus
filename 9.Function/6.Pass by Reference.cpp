#include<iostream>
using namespace std;
void swapp(int &a,int &b)
{
    int z = a;
    a = b;
    b = z;
}

int main()
{
    int a=10,b=15;
    cout<<"Before Swap Variable,a="<<a<<",b="<<b<<endl;
    swapp(a,b);
    cout<<"After Swap Variable,a="<<a<<",b="<<b<<endl;
}
