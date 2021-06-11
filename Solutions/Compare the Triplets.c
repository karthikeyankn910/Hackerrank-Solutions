 #include<stdio.h>
int main(){
     int a[100],b[100],i,j,aa=0,bb=0;
     for(i=0;i<3;i++)
     scanf("%d",&a[i]);
     for(j=0;j<3;j++)
     scanf("%d",&b[j]);
     for(i=0;i<3;i++){
         if(a[i]>b[i]){
             aa++;
         }
         else if(a[i]<b[i]){
             bb++;
         }
         else if(a[i]==b[i]){

         }
        
     }
     printf("%d %d",aa,bb);
     return 0;
 }
