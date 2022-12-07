#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void reversestring(char str[],int n){
	for(int i=0;i<n/2;i++){
	//swapping last character with first and second last with second and so on till n/2;
		char temp=str[i];
		str[i]=str[n-1-i];
		str[n-1-i]=temp;
	}
}
int main(){
	char str[]="raj roy";
	int n=strlen(str);
	reversestring(str,n);
	printf("%s",str);
}
