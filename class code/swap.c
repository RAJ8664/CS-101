#include <stdio.h>
#include <stdlib.h>

int main(){


//swapping two numbers using third variable
	printf("###swapping two numbers using third variable\n");

	int x,y;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	printf("before swapping : x=%d  y=%d\n",x,y);
	int temp=x;
	x=y;
	y=temp;
	printf("after swapping : x=%d  y=%d\n",x,y);
	
	
	printf(" \n");
	


//swapping two numbers using multiplication
	printf("###swapping two numbers using multiplication\n");	
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("before swapping : a=%d  b=%d\n",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("after swapping : a=%d  b=%d\n",a,b);
	
	printf(" \n");

//swapping two numbers using addtion
	printf("###swapping two numbers using addtion\n");
	int c,d;
	printf("enter the value of c:");
	scanf("%d",&c);
	printf("enter the value of d:");
	scanf("%d",&d);
	printf("before swapping : c=%d  d=%d\n",c,d);
	c=c+d;
	d=c-d;
	c=c-d;	
	printf("after swapping : c=%d  d=%d\n",c,d);
	
	printf(" \n");


//swapping two numbers using xor
	printf("###swapping two numbers using xor\n");
	int f,g;
	printf("enter the value of f:");
	scanf("%d",&f);
	printf("enter the value of g:");
	scanf("%d",&g);
	printf("before swapping : f=%d  g=%d\n",f,g);
	f=f^g;
	g=f^g;
	f=f^g;	
	printf("after swapping : f=%d  g=%d\n",f,g);
	
	printf(" \n");
	


}
