#include <stdio.h>
int main(){
    int n;
    unsigned long int ans=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("the factorial is:%lu",ans);
}
