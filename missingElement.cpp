#include<iostream>
using namespace std;
void missingElement(int arr[],int n)
{
    int check = 0;
    int element;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        {
            check = 1;
            element = i+1;
            cout<<"missing element = "<<element;
            break;
        }
    }
    
}
int main()
{
    int arr[] = {1,2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    missingElement(arr,n);
    return 0;
}