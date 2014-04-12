#include <stdio.h>
#include <stdlib.h>

#define LIMIT 5000010 /*Size of integers array*/

typedef unsigned long long int lld;
typedef unsigned long int ld;

lld myprimes[4000000];

int main(){
    unsigned long long int i,j;
    int *primes;
    int z = 1;
    lld count  = 0;
    primes = malloc(sizeof(int)*LIMIT);
    lld ans = 0;
    lld m_limit = (lld)10000000;

    for (i=2;i<LIMIT;i++)
        primes[i]=1;

    for (i=2;i<LIMIT;i++)
        if (primes[i])
            for (j=i;i*j<LIMIT;j++)
                primes[i*j]=0;

    count = 0;
    for (i=2;i<LIMIT;i++){
        if (primes[i]){
            myprimes[count++] = i;
        }
    }



    for(i=0;i<count;i++){
        for(j=i;j<count;j++){
            // printf("%lld\n",myprimes[i]);
            if( (myprimes[i]*myprimes[j])<=m_limit ){
                printf("For primes %lld and %lld \n",myprimes[i],myprimes[j] );
                ans++;
            }else
                break;
        }
    }
    printf("ans = %lld\n",ans);


return 0;
}

