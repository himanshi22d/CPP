Ques: Use push_back method to put elements in vector

sol:
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int>arr;
    
    //Push Elements
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(1);
    arr.push_back(15);
    
    //Print the elements
    for(int i=0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
