#include<iostream>
using namespace std;

class MyClass{
public:
    int myNum;
    string myString;
};

int main()
{
    MyClass obj1;
    obj1.myNum = 7;
    obj1.myString = "Cristiano Ronaldo";

    cout<<"Player : "<<obj1.myString<<" Jersy num : "<<obj1.myNum<<endl;
    // Player : Cristiano Ronaldo Jersy num : 7

    return 0;
}
