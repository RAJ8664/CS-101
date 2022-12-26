#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void solution(char arr[],char arr1[],int n,int m){
    char res[100];
    strcat(arr,arr1);
    int flag[100];
    for(int x=0;x<100;x++){
        for(int i=0;i<50;i++)flag[i]=0;
        char to_print[100];
        for(int i=0;i<n+m;i++){
            int it = rand()%(n+m-i);
            int cnt = 0;
            for(int j=0;j<n+m;j++){
                if(cnt==it && !flag[j]){
                    to_print[i] = arr[j];
                    it++;
                    flag[j]=1;
                    break;
                }
                if(!flag[j])cnt++;
            }
        }
        printf("%s\n",to_print);
    }
    printf("%s",arr);
}
int main(){
   char arr[]="raj";
   char arr1[]="roy";
   int n=strlen(arr);
   int m=strlen(arr1);
   int lenght=m+n;
   char res[lenght];
   solution(arr, arr1, n, m);
   return 0;
}
