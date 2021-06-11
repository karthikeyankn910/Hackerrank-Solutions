 #include<stdio.h>
 int main(){
    int x1,v1,x2,v2,j1=0,j2=0,k1=0,k2=0;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);  //0 3 4 2
    k1=x1;k2=x2;  //0 4
    int i=0;
    while(i<10000){
        {
            k1=k1+v1;  //3  6  9  12
            j1++;      //1  2  3
        }
        {
            k2=k2+v2;  //6  8  10  12
            j2++;      //1  2  3
        }
        
        if((j1==j2)&&(k1==k2)){
            printf("YES");
            goto end;
        }
        i++;
    }
    printf("NO");

    end:
    ;
    return 0;
 }
