#include<stdio.h>
int main(){
    int n,a[60],m[60],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        m[i]=a[i];
    }
    

    for(i=0;i<n;i++){
        while((m[i]%5) != 0){
            m[i]=m[i]+1;
        }
        if(m[i]>=40){
            if((m[i]-a[i])<3){
                m[i]=m[i];
            }
            else{
                m[i]=a[i];
            }
        }
        else{
            m[i]=a[i];
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",m[i]);
    }
    
    return 0;
}
