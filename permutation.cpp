#include <iostream>
using namespace std;
int permutation(string str, string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        count += permutation(ros, ans+ch);
    }
    return count;
}
int main() {
    cout<<permutation("abc", "");
    return 0;
}
