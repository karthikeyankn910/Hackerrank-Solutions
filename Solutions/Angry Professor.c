#include<stdio.h>
int main(){
    int t,n[100],k[100],a[100][100],i,j,aft[100]={0},bef[100]={0};
    scanf("%d",&t);  //2
    for(i=0;i<t;i++){   
        scanf("%d%d",&n[i],&k[i]);  // n04 k03 n14  k12
        for(j=0;j<n[i];j++){      
            scanf("%d",&a[i][j]);   // a00-1 a01-3  a02 4  a03 2
        }                           // a10 0 a11-1  a12 2  a13 1
    }
    for(i=0;i<n[i];i++){
        for(j=0;j<n[i];j++){ 
            if(a[i][j]>0){
                aft[i]++;
            }
            else if(a[i][j]<=0){
                bef[i]++;
            }
        }
    }
    i=0;
    while(i<t){
        if(bef[i]>=k[i]){
            printf("NO\n");
            i++;
        }
        else{
            printf("YES\n");
            i++;
        }
    }
    return 0;
} 
