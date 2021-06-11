#include<stdio.h>
int main(){
    long long int n,i,j,count[100] = {0},t;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //1 2 3 4 5 4 3 2 1 3 4
    for(i=0;i<n;i++){
        for(j=1;j<6;j++){
            if(a[i]==j){
                count[j]++;
            }
        }
    }
     
    int max = 0, index = 0;
    for (i = 1; i < 6; i++) {
        if (max < count[i]) {
            max = count[i];
            index = i;
        }
    }
    printf ("%d", index);
    return 0;
}
