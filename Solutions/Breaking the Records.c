#include<stdio.h>
int main(){
    long long int s[1000],min,max,maxcount=0,mincount=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&s[i]);
    }
    min=s[0];
    max=s[0];
    for(i=0;i<n;i++){
        if(max<s[i]){
            max=s[i];
            maxcount++;
        }
        if(min>s[i]){
            min=s[i];
            mincount++;
        }
    }
    printf("%lld %lld",maxcount,mincount);
    return 0;
}
