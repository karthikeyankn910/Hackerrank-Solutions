 #include<stdio.h>
 #include<stdlib.h>
 int main(){
     int i,j=0,q,x[100],y[100],z[100];
     scanf("%d",&q);
     for(i=0;i<q;i++){
        for( ;j<i+1;j++){
            scanf("%d%d%d",&x[j],&y[j],&z[j]);
        }
     }
     for(j=0;j<q;j++){
         if(abs(x[j]-z[j])==abs(y[j]-z[j])){
            printf("Mouse C\n");
         }
         else if(abs(x[j]-z[j])>abs(y[j]-z[j])){
             printf("Cat B\n");
         }
         else{
             printf("Cat A\n");
         }
     }
     return 0;
 }
