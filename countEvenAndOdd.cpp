#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,2,3,4,5,88,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    int countEven = 0;
    int countOdd = 0;

    for(int i=0;i<n;i++)
    {
        if((arr[i]%2) == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout<<"number of even numbers = "<<countEven<<endl;
    cout<<"number of odd numbers = "<<countOdd<<endl;
    return 0;
}