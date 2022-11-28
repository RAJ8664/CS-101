1>>>


#include <stdio.h>

int main()
{
    printf ("Escape characters in c\n");
    printf("\\a : Alarm or beep\n");
    printf("\\b : Backspace\n");
    printf("\\f : Form Feed\n");
    printf("\\n : New line\n");
    printf("\\r : Carriage return\n"); 
    printf("\\t : Tab(Horizontal)\n");
    printf("\\v : Vertical Tab\n");
    printf("\\\\ : Backslash\n");
    printf("\\' : Single Quote\n");
    printf("\\""\" : Double Quote\n");
    printf("\\? : Question mark\n");
    printf("\\ooo : octal number\n");
    printf("\\0 : Null\n");
    printf("%% : percentage sign\n");
    return 0;
}






2>>>




#include <stdio.h>
#include <math.h>

int main()
{
	int number,numberToInsert,position;
	printf("Enter the number where another number is to be inserted:");
	scanf("%d",&number);
	printf("Enter the number to be inserted:");
	scanf("%d",&numberToInsert);
	printf("Enter the position from LSB:");
	scanf("%d",&position);
	int numberOfBits=0,eraser,n=numberToInsert;
	while (n>=1)
	{
		eraser+=(pow(2,numberOfBits));
		numberOfBits+=1;
		n=n/2;
	}
	int result=(number&(~(eraser<<position)))|(numberToInsert<<position);
	printf("Result:%d",result);
	return 0;
}






3>>>


#include<stdio.h>
int main()
{
   int a,b,c,d,e, larg;
   printf("Enter five Numbers\n");
   scanf("%d %d %d %d %d",&a,&b,&c,&d, &e);
    if(a>b)
      {  if(a>c)
          {
              if(a>d)
              {
                if(a>e)
                  larg = a;
                else
                  larg = e;
              }
              else
              {
                  if(d>e)
                    larg = d;
                   else
                    larg = e;
              }
          }
          else
          {  if(c>d)
               {
                    if(c>e)
                        larg = c;
                    else
                        larg = e;
               }
             else
             {
                 if(d>e)
                    larg = d;
                 else
                    larg = e;
             }

            }
      }
    else
      { if(b>c)
           {
               if(b>d)
               { if(b>e)
                   larg = b;
                 else
                    larg = e;
               }
               else
               { if(d>e)
                   larg = d;
                 else
                    larg = e;
               }
           }
           else
           { if(c>d)
               { if(c>e)
                   larg = c;
                 else
                   larg = e;
               }
              else
              { if(d>e)
                   larg = d;
                else
                   larg = e;
              }
           }
      }
    printf("%d is Largest Number",larg);

    return 0;
}






4a=18442
4b=33
4c=18467
4d=41


5>>>>


#include <stdbool.h>
#include <stdio.h>
bool powerOftwo(int n)
{
	if (n == 1)
		return true;

	else if (n % 2 != 0 || n == 0)
		return false;

	return powerOftwo(n / 2);
}
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
	if (powerOftwo(n) == 1)
		printf("True\n");
	else
		printf("False\n");
}



6>>

toggle bits

#include <stdbool.h>
#include <stdio.h>
int toggleBit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}
int main()
{
   int n = 5, k = 1;
   printf("%d with %d-th bit Toggled: %d\n",
           n, k, toggleBit(n, k));
   return 0;
}



7>>


#include <stdbool.h>
#include <stdio.h>
#define INT_BITS 32
int leftRotate(int n, unsigned int d)
{
   return (n << d)|(n >> (INT_BITS - d));
}

int rightRotate(int n, unsigned int d)
{
   return (n >> d)|(n << (INT_BITS - d));
}
int main()
{
  int n = 16;
  int d = 2;
  printf("Left Rotation of %d by %d is ", n, d);
  printf("%d", leftRotate(n, d));
  printf("\nRight Rotation of %d by %d is ", n, d);
  printf("%d", rightRotate(n, d));
  getchar();
}



