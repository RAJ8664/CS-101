#include <stdio.h>
#include <stdlib.h>
int missing_number(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int x=n+1;
    int sum1=(x*(x+1))/2;
    int ans=sum1-sum;
    return ans;
}
int main(){
    int arr[]={1,3,4,5};
    //from above input array we know 2 is missing;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the missing number is:%d",missing_number(arr,n));
    return 0;
}
