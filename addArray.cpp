#include<iostream>
#include<vector>
using namespace std;

void addTwoArrays(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
    
    int size = max(n, m) + 1;
    vector<int> ans(size, 0);
    int i = n - 1;
    int j = m - 1;
    int k = ans.size() - 1;
    int carry = 0;
    while (k > 0) {
        int sum = carry;
        if (i >= 0) {
            sum += a[i];
            i--;
        }
        if (j >= 0) {
            sum += b[j];
            j--;
        }
        ans[k] = sum % 10;
        k--;
        carry = sum / 10;
    }
    for (int l = 0; l < ans.size(); l++) {
        if (l == 0 && ans[l] == 0) {
            continue;
        }
        cout << ans[l] << " ";
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int> b = {4, 5, 6, 3, 2, 4};
    addTwoArrays(a, b);
    return 0;
}
