#include <bits/stdc++.h>
using namespace std;

void deleteElement(vector<int>& arr, int inx)
{
    for(int i = inx; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr.pop_back();
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};

    deleteElement(arr, 3);

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}