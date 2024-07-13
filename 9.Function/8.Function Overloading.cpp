#include<iostream>
using namespace std;
int plusFunc(int a,int b)
{
    return a+b;
}
double plusFunc(double a,double b)
{
    return a+b;
}

int main()
{
    int a=20,b=30;
    int res1 = plusFunc(a,b);
    cout<<"Sum is : "<<res1<<endl;

    double x=20.5,y=29.6;
    double res2 = plusFunc(x,y);
    cout<<"Sum is : "<<res2<<endl;


    return 0;
}
