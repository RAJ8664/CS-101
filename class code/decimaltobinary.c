#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define lli unsigned long long int

int decimaltobinary(int n){
	int count=0;
	int ans=0;
	int temp=n;
	while(temp!=0){
		int digit=temp%2;
		lli c=pow(10,count);
		ans=ans+digit*c;
		temp=temp/2;
		count++;	
	}return ans;
}

int main(){

	int n;
	printf("enter a number:");
	scanf("%d",&n);
	printf("decimal number %d in binary is represented as:%d\n",n,decimaltobinary(n));
	return 0;


}
