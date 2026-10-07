#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr)
{
    int k = arr.size();

    for(int j = 0; j<k-1; j++)
    {
        bool swapped = false;
        for(int i = 0; i < k-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }

        if(!swapped)
            break;
    }
}

int main()
{
    // vector<int> arr = {4,2,5,6,8,1,3,7,9};
    vector<int> arr = {5,4,3,2,1};

    bubbleSort(arr);

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}