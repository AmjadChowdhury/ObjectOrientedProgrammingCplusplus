#include<iostream>
using namespace std;

class Juthy{
public:
    void func()
    {
        cout<<"I am Nasrin Sultana Juthy.\n";
    }
};

class Rahat : public Juthy{
public:
    void func()
    {
        cout<<"I am Rahat Khan.\n";
    }
};

class Amjad : public Juthy{
public:
    void func()
    {
        cout<<"I am Amjadul Alam Chowdhury.\n";
    }
};

class Sabuj : public Juthy{
public:
    void func()
    {
        cout<<"I am Sabuj Ahammed.\n";
    }
};

int main()
{
    Amjad obj;
    obj.func();
    // I am Amjadul Alam Chowdhury.

    Rahat obj2;
    obj2.func();

    Juthy obj3;
    obj3.func();

    Sabuj obj4;
    obj4.func();

    return 0;
}
