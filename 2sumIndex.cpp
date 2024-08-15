//infinite loop bngya meri maa theek kri ehnu chalaun toh pehla
#include<iostream>
#include<vector>
using namespace std;
vector<int> indices(vector<int> arr,int target)
{
    vector<int> answer ;
    int n = arr.size();
    int i=0,j =n-1;
    while(i!=j)
    {
        if((arr[i]+arr[j]) == target)
        {
            answer.push_back(i);
            answer.push_back(j);
            break;
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
    return answer;
}
int main()
{
    vector<int> arr = {2,5,6,8,11};
    int target = 14;
    vector<int> index = indices(arr,target);
    for(int i =0;i<index.size();i++)
    {
        cout<<index[i]<<" ";
    }
    return 0;
}