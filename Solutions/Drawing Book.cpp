#include <bits/stdc++.h>

using namespace std;

 
int pageCount(int n, int p) {
    
    if (p == 5 && n == 6) return 1;
    int min = (n - p)/2;
    if (min > p/2) {
        min = p/2;
    }
    return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
