Ques: Take Vector as an input and display the vector

Solution:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    vector<int>arr(n,0);
    
    //Take input
    for(int i=0 ; i<arr.size() ; i++)
    {
        cin>>arr[i];
    }
    
    //Print the elements
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
