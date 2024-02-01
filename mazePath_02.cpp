
#include <iostream>
using namespace std;

int mazePath_02(int sr, int sc, int er, int ec, string ans)
{
    if(sr == er && sc == ec)
    {
        cout<<ans<<endl;
        return 1;
    }
    int count = 0;
    for(int jump=1; sc+jump<=ec; jump++)
    {
        count+=mazePath_02(sr,sc+jump,er,ec,ans+"H"+to_string(jump));
    }
    for(int jump=1; sr+jump<=er; jump++)
    {
        count+=mazePath_02(sr+jump,sc,er,ec,ans+"V"+to_string(jump));
    }
    for(int jump=1; sr+jump<=er && sc+jump<=ec; jump++)
    {
        count+=mazePath_02(sr+jump,sc+jump,er,ec,ans+"DE"+to_string(jump));
    }
    
    return count;
}

int main() {
    cout<<mazePath_02(0,0,2,2,"");

    return 0;
}
