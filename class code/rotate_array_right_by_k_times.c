#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[],int n,int s,int e){
    while(s<e{
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s+=;
        e--;
    }
}
void rotate_right(int arr[],int n,int k){
    if(k==0){
        return;
    }
    k=k%n;
    reverse(arr,n,n-k,n-1);
    reverse(arr,n,0,n-k-1);
    reverse(arr,n,0,n-1);
}
int main(){
    int arr1[]={1,2,5};
    int arr2[]={2,3,2};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("the sum is:%lf",sum(arr1,arr2,n));
    return 0;
}
