Ques: Find the data in array.

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
    
    int data;
    cin>>data;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            cout<<"Found";
        }
    }
    
    return 0;
}
