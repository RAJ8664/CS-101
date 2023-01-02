#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            printf("%d ",p);
}
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("Following are the prime numbers smaller than or equal to %d \n", n);
    SieveOfEratosthenes(n);
    return 0;

}
