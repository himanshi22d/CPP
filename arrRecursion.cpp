Ques: Print array using recursion

Sol:
#include <iostream>
#include <vector>
using namespace std;

void disply(vector<int>& arr, int idx)
{
    if(idx == arr.size())
    {
        return;
    }
    cout<<arr[idx]<<" ";
    disply(arr, idx+1);
}
int main() {
    vector<int> arr={1,2,3,4,5,6};
    disply(arr, 0);
    return 0;
}
