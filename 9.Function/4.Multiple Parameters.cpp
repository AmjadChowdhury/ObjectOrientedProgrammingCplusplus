#include<iostream>
using namespace std;
void sum(int a,int  b);

int main()
{
    int a=5,b=7;
    sum(a,b);


    return 0;
}
void sum(int a,int b)
{
    int sum = a+b;
    cout<<"Sum is : "<<sum<<endl;
}
