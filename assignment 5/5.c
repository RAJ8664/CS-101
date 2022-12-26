#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isValid (char s[])
{
    int length=strlen(s), ind1=0, ind2=0, ind3=0;
    if ( (s[0]<'a') || (s[0]>'z') ) return 0;
    else
    {
    for (int i=1;i<length;i++)
    {
        if (s[i]=='@')
        {
            ind1=i+1;
            break;
        }
        else
            if ( (s[i]<'a') || (s[i]>'z') ) return 0;
    }
    for (int j=ind1;j<length;j++)
    {
        if (s[j]=='.')
        {
            ind2=j+1;
            break;
        }
        else
            if ( (s[j]<'a') || (s[j]>'z') ) return 0;
    }
    for (int k=ind2;k<length;k++)
    {
        if (s[k]=='.')
        {
            ind3=k+1;
            break;
        }
        else
            if ( (s[k]<'a') || (s[k]>'z') ) return 0;
    }
    }
    if (s[ind3] == 'i' && s[ind3+1] == 'l') return 1;
    else return 0;
}
int main(){
    char str[100];
    printf("please enter the email address:");
    scanf("%s",&str);
    if(isValid(str)==1){
        printf("valid email address");
    }
    else{
        printf("not a valid email address");
    }
   return 0;
}
