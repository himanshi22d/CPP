Ques: Check a string is palindrome or not using recursion

Sol:

#include <iostream>
using namespace std;

bool checkPalindrome(string& str,int i,int j)
{
    if(i>j)
       return true;
    if(str[i]!=str[j])
    {
        return false;
    }
    else
    {
        return checkPalindrome(str,i+1,j-1);
    }
}

int main() {
    string a = "abbbbba";
    int size = a.length()-1;
    bool ans=checkPalindrome(a,0,size);
    if(ans)
    {
        cout<<"Yes it is a palindrome";
    }
    else
    {
        cout<<"No it is not a palindrome";
    }
    return 0;
}
