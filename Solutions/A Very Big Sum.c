 #include <stdio.h>]
 int main(){
     long long int a[100],s=0;
     int n,i;
     scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%lld",&a[i]);
         s=s+a[i];
     }
     printf("%lld",s);
return 0;
 }
