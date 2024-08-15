#include <iostream>
using namespace std;

int main() 
{
    int i =0;
    int arr[] = {1,2,3,-1,4,-5};
    int negative ;
    for(i = 0;i<6;i++)
    {
      if(arr[i]<0)
      {
        negative = arr[i];
        break;
      }
    }
    cout<<"negative number discovered is "<<negative<<endl;
    int index;
    for(int i=0;i<6;i++)
    {
      if(arr[i]==negative)
      {
        index = i;
      }
    }
    cout<<"index = "<<index<<endl;
    int temp = negative;
    for(i = index ; i<6 ; i++)
    {
      arr[i] = arr[i+1];
    }
    arr[5] = temp;
    for(int i =0;i<6;i++)
    {
      cout<<arr[i]<<" ";
    }
    return 0;
}