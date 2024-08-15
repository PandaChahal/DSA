#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "array = ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1,2,3,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++)
    {
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[j] == arr[i])
            {
                arr[j] = 0;
            }
        }
    }
    printArray(arr,n);
    return 0;
}