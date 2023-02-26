#include <stdio.h>
#include<string.h>

unsigned int binaryTOInt(char str[]){
    int len =strlen(str);
    
    
    unsigned int ans =0;
    for(int i=0;i<len;i++){
        int bit =str[i]-'0';
      ans=ans*2+bit;
        
    }
    return ans;
}

int main() {
    char str[1000];
    gets(str);
   printf("%d\n", binaryTOInt(str));
    return 0;
}