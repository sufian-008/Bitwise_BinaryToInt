#include <stdio.h>
#include<string.h>

unsigned int binaryTOInt(char str[]){
    int len =strlen(str);
    
    
    unsigned int ans =0;
    for(int i =len-1, p2=1 ;i>=0 ;i--,p2*=2){
        int bit =str[i]-'0';
        printf("%d %d %d\n", i,p2,bit);
        if(bit == 1){
            ans+=p2;
        }
        
    }
    return ans;
}

int main() {
   printf("%d\n", binaryTOInt("1010"));
    return 0;
}
 