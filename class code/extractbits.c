#include <stdio.h>
#include <stdlib.h>



//n==the input number
//k=number of bits
//p=from position
int bits(int n,int k,int p){
	return (((1<<k)-1)&(n>>(p-1)));

}
int main(){
	int n,k,p;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("enter the value of k:\n");
	scanf("%d",&k);
	printf("enter the value of p:\n");
	scanf("%d",&p);
	printf("the extracted number is %d\n",bits(n,k,p));



}
