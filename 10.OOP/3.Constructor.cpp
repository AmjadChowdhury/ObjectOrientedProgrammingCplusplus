#include<iostream>
using namespace std;
class MyClass{
public:
    int roll;
    int age;

    MyClass(int x,int y)
    {
        roll = x;
        age = y;
    }
    void myMethod()
    {
        cout<<"Roll : "<<roll<<",Age : "<<age<<endl;
    }
};

class Player{
public:
    int num;
    string name;
    Player();

    void myFunc()
    {
        cout<<"Player : "<<name<<",Jersy : "<<num<<endl;
    }
};

Player :: Player()
{
    cout<<"Welcome to the Manchester United.\n";
}

int main()
{
    MyClass obj1(2056,21);
    obj1.myMethod();
    // Roll : 2056,Age : 21

    Player obj2;
    // Welcome to the Manchester United.
    obj2.name = "CR";
    obj2.num = 7;
    obj2.myFunc();
    // Player : CR,Jersy : 7

    return 0;
}
