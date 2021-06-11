 #include<stdio.h>
 int main(){
     int a=1,l=1,i,j,n;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
         for(j=0;j<n-i;j++){
             printf(" ");
         }
         while(a<=l){
         printf("#");
         a++;
         }
         printf("\n");
         l++;
         a=1;
     }
     return 0;
 }
