#include <stdio.h>
int main(){
	int n,digit,ans,temp;
	printf("enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		digit=temp%10;
		ans=ans*10+digit;
		temp=temp/10;
	}
	printf("the reverse of number is = %d\n",ans);
}
