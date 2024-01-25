#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main() {
    vector<int>arr = {2,7,5,9,3,4,1};
    
    insertionSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
