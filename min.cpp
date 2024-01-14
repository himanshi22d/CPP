Ques: Find the minimum element of array.

Solution:

#include <iostream>
using namespace std;

int main() {
    int size;
    cin>>size;
    
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int minEle = (int)1e8;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] < minEle)
        {
            minEle = arr[i];
        }
    }
    cout<<minEle;
    
    return 0;
}
