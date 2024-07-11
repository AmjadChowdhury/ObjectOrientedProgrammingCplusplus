#include<iostream>
using namespace std;

int main()
{
    int num1=10,num2=5;

    int res1 = (num1 < num2) && (num1 % num2==0);
    cout<<"Res1 : "<<res1<<endl;

    int res2 = (num1 < num2) || (num1 % num2==0);
    cout<<"Res2 : "<<res2<<endl;

    int res3 = !(num1 < num2);
    cout<<"Res3 : "<<res3<<endl;



    return 0;
}
