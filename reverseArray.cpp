Ques: Reverse an Array

Sol:
#include <iostream>
#include <vector>
using namespace std;

void swapIndex(vector<int>&arr, int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void reverseArray(vector<int>&arr)
{
    int i=0;
    int j=arr.size()-1;
    swapIndex(arr,i,j);
}

int main() {
    
    vector<int>arr={1,2,3,4,5,6};
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    reverseArray(arr);
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}
