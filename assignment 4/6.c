#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int armstrong(int n){
   int temp=n;
   int ans=0;
   while(temp!=0){
        int digit=temp%10;
        ans=ans+pow(digit,3);
        temp=temp/10;
   }
   if(ans==n){
        return 1;
   }
   else{
        return 0;
   }
}
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(armstrong(n)==1){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}
