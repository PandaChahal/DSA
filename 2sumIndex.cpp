//infinite loop bngya meri maa theek kri ehnu chalaun toh pehla
#include<iostream>
#include<vector>
using namespace std;
void indices(vector<int> arr,int target)
{
    int n = arr.size();
    int i=0,j =n-1;
    while(i!=j)
    {
        if(arr[i]+arr[j] == target)
        {
            cout<<"indices = ["<<i<<","<<j<<"]";
        }
        else if((arr[i]+arr[j])<target)
        {
            i++;
        }
        else 
        {
            j--;
        }
    }
}
int main()
{
    vector<int> arr = {2,5,6,8,11};
    int target = 14;
    indices(arr,target);

    return 0;
}