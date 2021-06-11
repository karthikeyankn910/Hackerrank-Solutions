 #include<stdio.h>
 int main(){
     long long int a[100],min=0,max=0,t=0;
     int i,j;
     for(i=0;i<5;i++){
         scanf("%lld",&a[i]);
     }
     for(i=0;i<4;i++){
         for(j=i+1;j<=4;j++){
             if(a[i]>a[j]){
                 t=a[i];
                 a[i]=a[j];
                 a[j]=t;
             }
         }
     }
    
     for(i=0;i<4;i++)
     min=min+a[i];
     for(i=1;i<5;i++)
     max=max+a[i];
     printf("%lld %lld",min,max);

     return 0;
 }
