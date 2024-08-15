//element occuring greater than n/2 times
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,4,5,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
        }
        if(count > n/2)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }

    return 0;
}