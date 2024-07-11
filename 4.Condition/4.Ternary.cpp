#include<iostream>
using namespace std;

int main()
{
    int num1=10,num2=5;
    (num1%num2 == 0)?cout<<num1<<endl : cout<<num2<<endl;

    string res = (num1 % num2 == 0)? "10 is divisible by 5." : "10 is not divisible by 5.";
    cout<<res<<endl;

    return 0;
}
