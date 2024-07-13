#include<iostream>
using namespace std;

int sum(int a,int b,int c);

int main()
{
    int a=5,b=7,c=8;
    int res = sum(a,b,c);
    cout<<"The sum of three variable is : "<<res<<endl;

    return 0;
}

int sum(int a,int b,int c)
{
    int sum = a+b+c;
    return sum;
}
