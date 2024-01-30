Ques: Print even numbers in increasing order using recursion

sol:
#include <iostream>
using namespace std;

void evenInc(int a, int b)
{
    if(a == b+1)
    {
        return;
    }
    if(a%2 == 0)
    {
        cout<<a<<" ";
    }
    evenInc(a+1,b);
}
int main() {
    evenInc(0,10);
    return 0;
}
