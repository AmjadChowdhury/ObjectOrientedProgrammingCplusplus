#include<iostream>
using namespace std;

class Father{
public:
    void daddy()
    {
        cout<<"This is from father class.\n";
    }
};

class Mother{
public:
    void mommy()
    {
        cout<<"This is from mother class.\n";
    }
};

class Child : public Father,public Mother{
public:
    void ami()
    {
        cout<<"Hello!This is me.!\n";
    }
};

int main()
{
    Child obj;
    obj.daddy(); // This is from father class.
    obj.mommy(); // This is from mother class.
    obj.ami(); //Hello!This is me.!

    return 0;
}
