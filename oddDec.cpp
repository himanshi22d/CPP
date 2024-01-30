Ques: Print odd numbers in decreasing order using recursion

Sol:
#include <iostream>
using namespace std;

void oddDec(int a, int b)
{
    if(a == b+1)
    {
        return;
    }
    if(a%2 != 0)
    {
        cout<<a<<" ";
    }
    oddDec(a+1,b);
}
int main() {
    oddDec(0,10);
    return 0;
}
