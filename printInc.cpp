Ques: Print counting from a to b in increasing order

sol:
#include<iostream>
using namespace std;

void printInc(int a, int b)
{
    if(a == b+1)
    {
        return;
    }
    cout<<a<<endl;
    printInc(a+1,b);
}

int main()
{
    printInc(0,5);
    return 0;
}
