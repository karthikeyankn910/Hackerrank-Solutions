 
#include<stdlib.h>
#include<stdio.h>
int main(){
    int n,a[100],i,j,c=0; 
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    i=0;
    for(;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]!=-1 && a[j]!=-1) {
                if(a[i] == a[j]){
                    c++;
                    a[i] = -1;
                    a[j] = -1;
                }
            }
        }
    }
    printf("%d",c);
    return 0;
 }
