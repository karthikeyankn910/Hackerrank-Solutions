#include <stdio.h>
int main () {
    int n;
    scanf ("%d", &n);
    int a, l, c, i, num;
    for (i = 0 ; i < n; i++) {
        scanf ("%d", &a);
        num = a;
        while (num > 0) {
            l = num % 10;
            if (l == 0) {
                ;
            }
            else if ((a % l) == 0) {
                c++;
            }
            num = num / 10;
        }
        printf ("%d\n", c);
        c = 0;
    }
    return 0;
}
