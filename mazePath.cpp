Ques: Print the paths from src to dest and give the count as well.

#include <iostream>
using namespace std;

int mazePath(int sr, int sc, int er, int ec, string ans)
{
    if(sr == er && sc == ec)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    if(sr+1 <= er)
    {
        count+=mazePath(sr+1,sc,er,ec,ans + "V");
    }
    if(sc+1 <= ec)
    {
        count+=mazePath(sr,sc+1,er,ec,ans + "H");
    }
    if(sc+1 <= ec && sr+1 <= er)
    {
        count+=mazePath(sr+1,sc+1,er,ec,ans + "D");
    }
    return count;
}

int main() {
    cout<<mazePath(0,0,2,2,"");

    return 0;
}
