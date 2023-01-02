#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void solution(int arr[],int n){
    double sum=0;
    double raj=0;
    double ans=0;
    double mean;
    double variance;
    double stdev;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    mean=sum/n;
    printf("the mean is:%lf\n",mean);

    for(int i=0;i<n;i++){
        raj+=(arr[i]-mean)*(arr[i]-mean);
    }
    variance=raj/n;
    printf("the variance is:%2lf\n",variance);

    stdev=sqrt(variance);
    printf("the standard deviation is:%lf",stdev);
}
int main()
{
    int n;
    printf("enter the number of element to be inserted in the array:");
    scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
        arr[i]=rand();
	}
	solution(arr,n);
	return 0;
}
