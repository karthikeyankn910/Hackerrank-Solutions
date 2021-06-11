#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {
    string r;
    r = s;
    reverse(r.begin(), r.end());
    int i = 0, c = 0;
    while (i < s.size()) {
        if (abs(s[i] - s[i+1]) == abs (r[i] - r[i+1])) c++;
        i++;
    }
    return c == s.size() - 1 ? "Funny" : "Not Funny";
    // int i = 0;
    // vector<int> a;
    // while(i < s.size() - 1) {
    //     a.push_back(abs(s[i]-s[i+1]));
    //     i++;
    // }
    // int n = a.size(), f = 0;
    // for (int i = 0, j = a[n-1]; i < n/2; i++, j--) {
    //     if (a[i] == a[j]) f++;
    // }
    // if (f == n/2) return "Funny";
    // return "Not Funny";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
