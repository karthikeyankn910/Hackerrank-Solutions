#include <stdio.h>
int main () {
    int t, i, j, k, i1, i2, m, n;
    scanf ("%d", &t);
    for (i = 0; i < t; i++) {
        scanf ("%d %d", &m, &n);
        int a[n];
        for (j = 0; j < n; j++)
            scanf ("%d", &a[j]);
        for (j = 0; j < n - 1; j++) {
            for (k = j + 1; k < n; k++) {
                if (a[j]+a[k] == m) {
                    i1 = j;
                    i2 = k;
                }
            }
        }
        printf ("%d %d\n", i1+1, i2+1);
    }
}
