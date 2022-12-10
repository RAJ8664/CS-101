#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double sum(int arr1[],int arr2[],int n){
    double sum;
    double ans;
    for(int i=0;i<n;i++){
        int x=pow(arr1[i],2);
        int y=pow(arr2[i],2);
        int z=x+y;
        double raj=pow(z,0.5);
        sum=sum+raj;
    }
    return sum/n;
}
int main(){
    int arr1[]={1,2,3};
    int arr2[]={2,3,4};
    //if you want to add more element to the array please change the double data type to long double(in function sum above) or similar;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    printf("the sum is:%lf",sum(arr1,arr2,n));
    return 0;
}
