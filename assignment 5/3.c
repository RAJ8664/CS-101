#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reverse(char str[],int s,int e){
    while(s<e){
        char temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
}
void printarray(char str[],int n){
    for(int i=0;i<n;i++){
        printf("%c",str[i]);
    }
}
void reverse_word(char str[],int n){
    int low=0;
    int high=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            reverse(str,low,high);
            low=high=i+1;
        }
        else{
            high=i;
        }
    }
    reverse(str,low,high);
    reverse(str,0,n-1);
}
int main(){
    char str[]="raj roy";
    int n=sizeof(str)/sizeof(str[0]);
    printf("given sentence:\n");
    printarray(str,n);
    reverse_word(str,n);
    printf("\nthe reversed sentence is:\n");
    printarray(str,n);
    return 0;
}

