#include<iostream>
using namespace std;

struct student{
    string name;
    int roll;
    int age;
};

int main()
{
    student s1,s2;

    s1.name = "Tasnim";
    s1.roll = 10;
    s1.age = 22;

    s2.name = "Amjadul Alam";
    s2.roll = 7;
    s2.age = 21;

    cout<<s1.name<<" "<<s1.roll<<" "<<s1.age<<endl;
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.age<<endl;


    return 0;
}
