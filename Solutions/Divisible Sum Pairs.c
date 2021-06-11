 #include<stdio.h>
 int main(){
     int n,k,c=0,res=0;
     scanf("%d%d",&n,&k);  // 6 3
     int a[n],i,j;
     for(i=0;i<n;i++){
         scanf("%d",&a[i]); // 1 3 2 6 1 2
     }
     for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){     
            res=a[i]+a[j];
            if((res % k) == 0){
                c++;
            }
        } 
    }     
    printf("%d",c);
     return 0;
 }
