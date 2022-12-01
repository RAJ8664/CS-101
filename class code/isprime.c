#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int n){
	if(n<=1){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	
	}return 1;



}
int main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(isprime(n)==1){
		printf("%d is a prime number\n",n);
	
	}else{
	
		printf("%d is not a prime number\n",n);
	}

}
