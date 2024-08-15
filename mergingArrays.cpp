//merge two arrays i/p - arr1 [1,2,3,4]  arr2[5,6,7] o/p- The newly created array should have elements of both arr1 and arr2 [1,2,3,4,5,6,7]
#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void merge(vector<int> arr1,vector<int> arr2)
{
    int a = arr1.size();
    int b = arr2.size();
    vector<int> arr(a+b) ;
    for(int i =0;i<arr1.size();i++)
    {
        arr[i] = arr1[i];
    }
    for(int i = arr1.size(); i < arr1.size() + arr2.size();i++)
    {
        arr[i] = arr2[i-4];
    }
    printArray(arr);
}
int main()
{
    vector<int> arr1 = {1,2,3,4};
    vector<int> arr2 = {5,6,7};
    merge(arr1,arr2);
    return 0;
}