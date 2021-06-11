#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
    string ans = "";
    vector<string> s = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nienteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};
    if (m == 0) {
        ans = s[h] + " " + s[m];
    }
    else if (m == 1) {
        ans = s[m] + " minute past " + s[h];
    }
    else if (m == 15) {
        ans = s[m] + " past " + s[h];
    }
    else if (m == 45) {
        ans = s[60 - m] + " to " + s[h+1];
    }
    else if (m == 30) {
        ans = s[m] + " past " + s[h];
    }
    else if (m < 30) {
        ans = s[m] + " minutes past " + s[h];
    }
    else {
        m = 60 - m;
        ans = s[m] + " minutes to " + s[h+1];
    } 
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
