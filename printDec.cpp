Ques: Print counting from a to b in decreasing order

sol:
#include<iostream>
using namespace std;

void printDec(int a, int b)
{
    if(a == b+1)
    {
        return;
    }
    printInc(a+1,b);
    cout<<a<<endl;
}

int main()
{
    printDec(0,5);
    return 0;
}
