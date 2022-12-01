#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//armstrong of a number
int main(){
	int num,sum=0,digit,temp;
	printf("enter a number:");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		digit=temp%10;
		sum=sum+pow(digit,3);
		temp=temp/10;
	}
	if(sum==num){
		printf("the number is armstrong\n");
	}
		
	else{
		printf("the number is not armstrong\n");
	}
		
}
