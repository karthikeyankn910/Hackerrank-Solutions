#include <stdio.h>
#include <stdlib.h>s
int main () {
    int n, i, j, num, ld = 0, rd = 0;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf ("%d", &num);
            if (i == j) {
                ld = ld + num;
            }
            if (i+j == n-1) {
                rd = rd + num;
            }
        }
    }
    printf ("%d", abs(ld - rd));
    return 0;
}
