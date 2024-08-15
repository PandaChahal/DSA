//largest subarray
#include<iostream>
#include<vector>
using namespace std;

int maxLength(vector<int> arr)
{
    int maxlength = 0;
    int length;
    for(int i =0;i<arr.size();i++)
    {
        if(arr[i] > 0)
        {
            maxlength = i;
            length = max(maxlength,i);
        }
        
    }
    return length ;
}

void subArray(vector<int> arr,int target)
{
    int n = arr.size();
    int sum = 0;
    vector<int> hash(n+1,0);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum = sum + arr[j];
            if(sum == target )
            hash[i-j+1]++;
        }
    }
    cout<<maxLength(hash);
}

int main()
{
    vector<int> arr = {2,3,5,1,9};
    subArray(arr,10);
    return 0;
}