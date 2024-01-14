Ques: Print the Reverse of the number

Solution:

#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int reverse=0;
    while(n!=0)
    {
        int rem = n%10;
        reverse = reverse*10 + rem;
        n=n/10;
    }
    return reverse;
}

int main() {
    int n;
    cin>>n;
    cout<<reverseNumber(n)<<endl;
    return 0;
}
