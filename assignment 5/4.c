#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isvalid(char raj[]){
    int n=strlen(raj);
    int count=0;
    for(int i=0;i<n;i++){
        if(raj[i]=='.'){
            count++;
        }
    }
    for(int i=0;i<n;i++){
            if(raj[i]=='e'&&raj[i-1]=='.'){
                return 0;
                break;
            }

    }
    if(count>1||raj[n-1]=='.'){
        return 0;
    }
    return 1;

}
int main()
{
    char raj[]="1.";
    if(isvalid(raj)==1){
        printf("Valid");
    }
    else{
        printf("Invalid");

    }
}
