#include<iostream>
using namespace std;

int main()
{
    //comparison returns always 1 or 0..
    int num1 = 20,num2=15;
    int res = num1 >= num2;
    cout<<"Comparison res : "<<res<<endl;

    if(num1>num2)
        cout<<"Num1 is greater than Num2."<<endl;
    else
        cout<<"Num2 is greater than Num1."<<endl;


    return 0;
}
