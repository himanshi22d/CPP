Ques: Subsequence of string

#include <iostream>
using namespace std;
int subsequence(string str, string ans)
{
    if(str.length() == 0)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    count = subsequence(str.substr(1),ans + str[0]);
    count += subsequence(str.substr(1), ans);
    return count;
}
int main() {
    cout<<subsequence("abc", "");
    return 0;
}
