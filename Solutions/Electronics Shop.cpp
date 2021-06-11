#include <iostream>
using namespace std;
int main () {
    long long int b, nk, nu, i, j;
    
    cin >> b >> nk >> nu;
    long long int k[nk], u[nu],  res = -1;
    // 10 2 3
    // 3 1
    // 5 2 8
    for (i = 0; i < nk; i ++)
       cin >> k[i];
    for (i = 0; i < nu; i ++)
        cin >>u[i];
    for (i = 0; i < nk; i ++) {
        for (j = 0; j < nu; j ++){
             
            if ((k[i] + u[j]) <= b &&  (k[i] + u[j]) >  res) {
               res = k[i] + u[j];     
            }
        }
    }
    
        cout << res;
    
    return 0;
}
