#include<iostream>
using namespace std;

class Employee{
protected:
    int salary;
};

class Programmer : public Employee{
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
    Programmer obj;
    obj.setSalary(100000000);
    cout<<"Monthly Programmer Salary : "<<obj.getSalary()<<endl;
    // Monthly Programmer Salary : 100000000

    return 0;
}
