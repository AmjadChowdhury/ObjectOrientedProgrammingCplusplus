#include<iostream>
using namespace std;

int main()
{
    string name = "Amjadul Alam Chowdhury";

    for(int i=0;i<name.size();i++)
    {
        cout<<name[i]<<endl;
    }

    cout<<"Another Access Way..\n";
    for(int i=0;i<name.size();i++)
    {
        cout<<name.at(i)<<endl;
    }

    return 0;
}
