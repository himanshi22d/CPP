Ques: Find data using vector

Sol:

#include <iostream>
#include <vector>
using namespace std;

bool findData(int n,vector<int>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==n)
        {
            cout<<"True";
            break;
        }
    }
}

int main() {
    int data;
    cin>>data;
    
    vector<int>arr={1,2,3,4,5,6};
    
    findData(data,arr);

    return 0;
}
