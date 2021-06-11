#include <stdio.h>
int main () {
    int i, a, p = 0, nn = 0, z = 0;
    float n;
    scanf ("%f", &n);
    for (i = 0; i < n ;i++) {
        scanf ("%d", &a);
        if ( a > 0) {
            p++;
        }
        else if (a < 0) {
            nn++;
        }
        else  {
            z++;
        }
    }
    printf ("%f \n%f \n%f", p/n, nn/n, z/n);
}
