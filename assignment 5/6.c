#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isvalid(char str[]){
    int lc=0,uc=0,sc=0,dc=0;
    int n=strlen(str);
    if(n<10){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(isupper(str[i])){
            uc++;
        }
        if(islower(str[i])){
            lc++;
        }
        if(isdigit(str[i])){
            dc++;
        }
        if(ispunct(str[i])){
            sc++;
        }
    }
    if(uc<2||lc<2||dc<2||sc<2){
            return 0;
    }
    for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    return 0;
                }
            }
    }
    return 1;
}
int main(){
    char str[100];
    printf("please enter the password:");
    scanf("%s",&str);
    if(isvalid(str)==1){
        printf("valid password");
    }
    else{
        printf("not a valid password");
    }
   return 0;
}
