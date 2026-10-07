#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>& arr, int inx, int element)
{
    arr.push_back(0);

    for(int i = arr.size() - 1; i > inx; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[inx] = element;
}

int main()
{
    vector<int> arr = {10,20,30,40};
    
    int element, index;

    cout << "Insert x into position y" << endl;
    cout << "x, y = ";
    cin >> element >> index;
    cout << endl;

    insert(arr, index, element);

    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}