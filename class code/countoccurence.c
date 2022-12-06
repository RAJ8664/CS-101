#include <stdio.h>
#include <stdlib.h>
int countoccurence(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            count++;
        }
    }return count;
}
int main(){
  int arr[]={1,2,3,1,5,4,3,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x;
  printf("enter the number to check its occurence in array:");
  scanf("%d",&x);
  printf("the occurence of %d in array is:%d",x,countoccurence(arr,n,x));
  return 0;
}
