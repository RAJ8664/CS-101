#include <stdio.h>
#include <stdlib.h>
int largest(int arr[],int n){
    int cmax;
    for(int i=0;i<n;i++){
        cmax=arr[0];
        if(arr[i]>cmax){
            cmax=arr[i];
        }
    }
    return cmax;
}
int smallest(int arr[],int n){
    int csmall;
    for(int i=0;i<n;i++){
        csmall=arr[0];
        if(arr[i]<csmall){
            csmall=arr[i];
        }
    }
    return csmall;
}
int main(){
    int arr[]={1,2,3,4,5};
    //to find size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("the largest element in array is:%d",largest(arr,n));
    printf("\n");
    printf("the smallest element int the array is:%d",smallest(arr,n));
    return 0;
}
