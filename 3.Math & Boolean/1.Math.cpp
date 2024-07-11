#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int num1 = 20,num2 = 10;
    int maxx = max(num1,num2);
    int minn = min(num1,num2);

    double sqrtt = sqrt(num1);
    int roundd = round(10.6);

    cout<<"Max : "<<maxx<<endl;
    cout<<"Min : "<<minn<<endl;
    cout<<"sqrt: "<<sqrtt<<endl;
    cout<<"Round : "<<roundd<<endl;


    return 0;
}
