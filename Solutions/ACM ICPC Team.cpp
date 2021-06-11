#include <bits/stdc++.h>
using namespace std;
int bitwiseOR (string &s, string &d) {
    int known = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1' || d[i] == '1') {
            known++;
        }
    }
    return known;
}
 
 
int main() {
    int n, sl, i, j;
    cin >> n >> sl;
    string ss;
    vector<string> s;
    for (i = 0; i < n; i++) {
        cin >> ss;
        s.push_back(ss);
    }
    int res;
    vector<int> ans;
    for (i = 0; i < s.size(); i++) {
        for (j = i + 1; j < s.size(); j++) {
            res = bitwiseOR(s[i], s[j]);
            ans.push_back(res);
        }
    }
    sort (ans.begin(), ans.end());
    int max = ans.back();
    int frequency = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == max) {
            frequency++;
        }
    }
    cout << max << endl << frequency;
    return 0;
}
