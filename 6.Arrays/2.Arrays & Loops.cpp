#include<iostream>
using namespace std;

int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i=0; i<4; i++)
    {
        cout<<cars[i]<<" ";
    }
    cout<<"\n\n";

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }


    return 0;
}
