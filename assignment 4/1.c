#include <stdio.h>
#include <stdlib.h>
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    //to find size of array
    int n=sizeof(arr)/sizeof(arr[0]);
    printarray(arr,n);
}
