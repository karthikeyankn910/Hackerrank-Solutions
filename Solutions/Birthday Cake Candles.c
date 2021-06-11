 #include<stdio.h>
 int main(){
     long long int n,max,i,res=0;
    
     scanf("%lld",&n);
     long long int a[n];
     for(i=0;i<n;i++){
         scanf("%lld",&a[i]);
     }
     max=a[0];
     for(i=0;i<n;i++){
         if(a[i]>max){
             max=a[i];
         }
     }
     for(i=0;i<n;i++){
         if(a[i]==max){
             res++;
         }
     }
     printf("%lld",res);
     return 0;
 }
