#include<stdio.h>
#include<string.h>
int main(){
    char s[100000];
    int i=0,l,words=1;
    scanf("%s",s);
    l=strlen(s);
   // printf("%d",s[4]);
    while(i<l){
        if((65<=s[i]) && (s[i]<=90)){
            words++;
            i++;
        }
        else{
            i++;
        }
    }
    printf("%d",words);
    return 0;
}
