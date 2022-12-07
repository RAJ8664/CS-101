#include <stdio.h>
#include <stdlib.h>
void reversearray(int arr[],int n){
	for(int i=0;i<n/2;i++){
	//swapping first with last ,second with second last and so on till n/2 time;
		int temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
}
void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	reversearray(arr,n);
	printarray(arr,n);



}
