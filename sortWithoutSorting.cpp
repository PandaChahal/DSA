#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &arr)
{
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            a++;
        }
        else if (arr[i] == 1)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        arr[i] = 0;
    }
    for (int i = a; i < a + b; i++)
    {
        arr[i] = 1;
    }
    for (int i = a + b; i < a + b + c; i++)
    {
        arr[i] = 2;
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 0, 1, 2};
    sort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}