Ques: Swap two element,s index with each other

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

int main() {
    
    vector<int>arr={1,2,3,4,5,6};
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    
    swapIndex(arr, 2, 4);
    
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    

    return 0;
}
