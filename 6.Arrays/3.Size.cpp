#include<iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int sizee = sizeof(myNumbers)/sizeof(int);

    cout<<"Size of this array : "<<sizee<<endl;

    for(int i=0;i<sizee;i++)
    {
        cout<<myNumbers[i]<<" ";
    }


    return 0;
}
