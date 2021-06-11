#include<stdio.h>
int main(){
    long int n,k,bill[100000],bc,ba=0,i;
    scanf("%ld%ld",&n,&k);
    for(i=0;i<n;i++){
        scanf("%ld",&bill[i]);
    }
    scanf("%ld",&bc);
    for(i=0;i<n;i++){
        if(i==k){
            continue;
        }
        else{
            ba=ba+bill[i];
        }
    }
    ba=ba/2;
    if(bc==ba){
        printf("Bon Appetit");
    }
    else if(bc>ba){
        printf("%ld",bc-ba);
    }
    return 0;
}
