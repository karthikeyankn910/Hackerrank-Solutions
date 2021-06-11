#include <stdio.h>
int hurdleRace(int k,int a[],int n){
    int i,max,dose=0;
    max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    if(k>max){
        return 0;
    }
    else{
        return max-k;
    }
}
int main(){
    int i,n,k,a[100],max,res;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);   
    }
    res=hurdleRace(k,a,n);
    printf("%d",res); 
    return 0;
}
