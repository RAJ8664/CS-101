
2>>>

#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j;
    for(i=1;i<=4;i++)
    {
      for(j=5;j>i;j--)
        printf("  ");
      for(j=1;j<=i;j++)
          printf("%d ",j);
      for(j=j-2;j>=1;j--)
          printf("%d ",j);
      printf("\n");
    }
    return 0;
}




3>> pascal triangle


#include <stdio.h>
#include <stdlib.h>
int main(){
    int rows=5,c=1,space,i,j;
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
    return 0;
}



4>>>

output:

2114445564     -528609343    -520351871    -2114961661  132185103    260175935    1040703612   -65043976   -264370208   -1057218687

total time elapsed is 0.108000




5>>>reverse the digit


#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,ans=0;
    printf("enter a number:");
    scanf("%d",&n);
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        ans=ans*10+digit;
        temp=temp/10;
    }
    printf("the reversed digit is %d",ans);
    return 0;
}



6>>> fibonacci series

#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=-1;
    int b=1;
    int i=0,n;
    printf("enter the value of nth term:");
    scanf("%d",&n);
    while(i<=n/2){
        a=a+b;
        b=a+b;
        printf("%d %d ",a,b);
        i++;
    }
    return 0;
}




7>>> factorial of a number


#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    unsigned long int ans=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("the factorial is %lu",ans);
    return 0;
}


8a>>>


#include <stdio.h>
#include <stdlib.h>
int main(){
    double ans=0;
    double n;
    printf("enter the value of n:");
    scanf("%lf",&n);
    for(double i=1;i<=n;i++){
        ans=ans+1/i;
    }
    printf("the sum is:%lf",ans);
    return 0;
}


8b>>>


#include <stdio.h>
#include <stdlib.h>
int main(){
    double x;
    double n;
    double ans=0;
    printf("enter the value of x:");
    scanf("%lf",&x);
    printf("enter the value of n:");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        ans=ans+(1/pow(x,i));
    }
    printf("the sum is:%lf",ans);
    return 0;
}

8c>>>


#include <stdio.h>
#include <stdlib.h>
int main(){
    double n;
    double ans=0;
    printf("enter the value of n:");
    scanf("%lf",&n);
    for(int i=1;i<=n;i++){
        ans=ans+(1/pow(2,i));
    }
    printf("the sum is:%lf",ans);
    return 0;
}




