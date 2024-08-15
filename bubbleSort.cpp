//bubble sort
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {2,88,3,53,63,17,29};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}