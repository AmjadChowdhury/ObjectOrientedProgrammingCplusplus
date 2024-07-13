#include<iostream>
using namespace std;
void passByArr(int nums[],int n)
{
    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[] = {10,5,17,18,20};
    passByArr(arr,sizeof(arr)/sizeof(int));

    return 0;
}
