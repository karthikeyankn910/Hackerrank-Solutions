#include <stdio.h>
#include <string.h>
 
int main(){
    char s[100], sos[100] = "SOS";
    int c = 0;
   
    int i = 0;
     
    scanf ("%s",s);  
    
    for ( ; i < strlen(s); i+=3){  ///sss
            if ((s[i] != 'S')) c++;
            if(s[i+1] != 'O') c++; 
            if (s[i+2] != 'S') c++;

    }
    printf ("%d", c);
    return 0;
}
