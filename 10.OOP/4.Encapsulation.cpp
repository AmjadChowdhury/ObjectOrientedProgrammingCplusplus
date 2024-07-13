#include<iostream>
using namespace std;

class MyClass{
private:
    int salary;
public:
    void setSalary(int x)
    {
        salary = x;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    MyClass obj1;

    obj1.setSalary(5000);
    int res = obj1.getSalary();
    cout<<"Salary : "<<res<<endl;
    // Salary : 5000

    return 0;
}
