#include<stdio.h>
int main(){
    int n,a[100],m,d,i,j,res=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);//1 2 1 3 2
    }
    scanf("%d%d",&d,&m);// 3 2 
    for(i=0;i<n;i++){
    for( j=i;(j<(m+i));j++){
       res=res+a[j];
    }
    if(res==d){
        c++;
        res=0;
    }
    res=0;
    }
    printf("%d",c);
    return 0;
}
