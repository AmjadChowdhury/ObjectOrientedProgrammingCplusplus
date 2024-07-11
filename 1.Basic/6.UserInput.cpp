#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter Number 1 : "; //insertion operator.. <<
    cin>>num1; // Extraction Operator.. >>
    cout<<"Enter another Number : ";
    cin>>num2;

    int sum = num1 + num2;
    cout<<"Result is : "<<sum<<endl;


    return 0;
}
