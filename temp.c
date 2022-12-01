#include <stdio.h>
#include <math.h>
#define lli unsigned long long int
reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[0];
        arr[0]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int decimaltobinary(int n){
    int count=0;
    int temp=n;
    int ans=0;
    while(temp!=0){
        int digit=temp%2;
        lli c=pow(10,count);
        ans=ans+digit*c;
        temp=temp/2;
        count++;
    }
    return ans;
}
int binarysearch(int arr[],int target,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }return -1;
}
int isprime(int n){
    int s=sqrt(n);
    if(n<=1){
        return 0;
    }
    for(int i=2;i<s;i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    //int arr[]={1,2,3,4,5};
    //int n=sizeof(arr)/sizeof(arr[0]);
    //printf("%d",binarysearch(arr,5,n));
    //printf("%d",decimaltobinary(n));
    if(isprime(n)==1){
    printf("prime number\n");
    }
    else{
        printf("not a prime number\n");
    }
    return 0;
}
