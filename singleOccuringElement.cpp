#include<iostream>
using namespace std;
int check(int arr[],int k)
{
    int count = 0 ;
    for(int i=0;i<5;i++)
    {
        if(arr[i] == k)
        {
            count++;
        }
    }
}
int main()
{
    int arr[] = {1,2,3,1,2};
    for(int i=0;i<5;i++)
    {
        if(check(arr,arr[i]) == 1 )
        {
            cout<<arr[i]<<endl;
        }
    }
    
    return 0;
}