#include <stdio.h>
#include <string.h>
int main () {
    char s[50][10000],rev[50][10000];
    int i, j, k, operation[100] = {0}, n;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s",s[i]);
    }
   
    for (i = 0; i < n; i++) {
        if (strlen (s[i]) % 2 == 0) {
            for (j = 0, k = strlen(s[i])-1; j < strlen(s[i]) && k >= j ; j++,k--) {
                r:if(s[i][j] == s[i][k]){
                    //nothing
                }
                else {
                    operation[i]++;
                    if (s[i][j] < s[i][k]) {
                        s[i][k]--;
                        goto r;
                    }
                    else {
                        s[i][j]--;
                        goto r;
                    }
                }
            }
        }
        else {  
            int mid = strlen (s[i]) / 2;        
            for (j = 0, k = strlen (s[i])-1; j < strlen (s[i]) && j < mid; j++, k--) {
                r1:if(s[i][j] == s[i][k]){
                    //nothing
                }
                else {
                    operation[i]++;
                    if (s[i][j] < s[i][k]) {
                        s[i][k]--;
                        goto r1;
                    }
                    else {
                        s[i][j]--;
                        goto r1;
                    }
 
                }
            }
        }
    }
  
    for (i = 0; i < n; i++) {
        printf ("%d\n", operation[i]);
    }
    return 0;
}

