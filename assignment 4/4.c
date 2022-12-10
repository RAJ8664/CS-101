#include <stdio.h>
#include <stdlib.h>
long fibonacci(int num){
    long a=0,b=1,c=0;
    if(num<=1){
        return num;
    }
    for(int i=2;i<=num;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int num;
    printf("enter the value of num:");
    scanf("%d",&num);
    printf("the %dth fibonacci number is:%ld",num,fibonacci(num));
    return 0;
}
