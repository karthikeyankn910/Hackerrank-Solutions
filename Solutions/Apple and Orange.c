#include<stdio.h>
int main(){
    int s,t,a,b,m,n,i,j,ap=0,op=0;
    scanf("%d%d%d%d%d%d",&s,&t,&a,&b,&m,&n);
    int app[m],ora[n];
    for(i=0;i<m;i++){
        scanf("%d",&app[i]);
         app[i]=a+app[i];
        if((app[i]>=s) && (app[i]<=t)){
            ap++;
        }
    }
    for(j=0;j<n;j++){
        scanf("%d",&ora[j]);
         ora[j]=b+ora[j];
        if((ora[j]>=s) && (ora[j]<=t)){
            op++;
        }
    }
   
    
    printf("%d\n%d",ap,op);
    return 0;
}
