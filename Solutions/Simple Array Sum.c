#include<stdio.h>
#include<stdlib.h>
int main(){
    int ar[1000],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
        s=s+ar[i];
    }
    
    printf("%d",s);
return 0;
}
