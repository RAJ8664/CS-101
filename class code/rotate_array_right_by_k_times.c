#include <stdio.h>
#include <stdlib.h>
void reverse(int arr[],int n,int s,int e){
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
void rotateright(int arr[],int n,int k){
    if(k==0){
        return;
    }
    k=k%n;
    reverse(arr,n,n-k,n-1);
    reverse(arr,n,0,n-k-1);
    reverse(arr,n,0,n-1);
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,5};
    int k;
    printf("enter the value of k:");
    scanf("%d",&k);
    int n=sizeof(arr)/sizeof(arr[0]);
    rotateright(arr,n,k);
    printarray(arr,n);
    return 0;
}
