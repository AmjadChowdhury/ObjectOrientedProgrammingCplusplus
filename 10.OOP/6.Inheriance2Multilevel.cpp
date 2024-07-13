#include<iostream>
using namespace std;

class MyClass{
public:
    void func()
    {
        cout<<"This is from parent class.\n";
    }
};

class Child : public MyClass{

};

class GrandChild : public Child{

};

int main()
{
    GrandChild obj;
    obj.func();

    return 0;
}
