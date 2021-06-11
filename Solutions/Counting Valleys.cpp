#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

 

int countingValleys(int steps, string path) {
    int i = 0, alt = 0, ans = 0;
    // UDDDUDUU
    while (i != steps) {
        if (path[i] == 'U') alt += 1;
        else if (path[i] == 'D') alt -= 1;
        else ; 
        if (alt == 0 && path[i] == 'U') ans++;  
        i ++;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string steps_temp;
    getline(cin, steps_temp);

    int steps = stoi(ltrim(rtrim(steps_temp)));

    string path;
    getline(cin, path);

    int result = countingValleys(steps, path);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
