#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
    vector<int>arr = {2,7,5,9,3,4,1};
    
    bubbleSort(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
