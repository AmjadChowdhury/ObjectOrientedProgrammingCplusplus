#include<iostream>
using namespace std;

class Vehicle{
public:
    string brand = "Ford";

    void honk()
    {
        cout<<"Tuut Tuut.\n";
    }
};

class Car : public Vehicle{
public:
    string model = "Mustang";
};

int main()
{
    Car obj1;
    obj1.honk();

    cout<<"Brand : "<<obj1.brand<<",Model : "<<obj1.model<<endl;

    return 0;
}
