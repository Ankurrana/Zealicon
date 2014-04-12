#include <stdio.h>
#include <stdlib.h>

#define LIMIT 10000000/*Size of integers array*/

typedef unsigned long long int lld;
typedef unsigned long int ld;

lld myprimes[4000000];

lld testprime(lld a){
    lld sum = 0;
    lld mul = 1;
    lld z = a;
    while(a>0){
        sum = sum + (a%10);
        mul = mul * (a%10);
        a = a/10;
    }

    // printf("for prime = %lld , mul = %lld , subsquare = %lld\n",z,mul,sum*sum);

    if( mul == sum*sum )
        return 1;
    else
        return 0;
}

lld is_Palin(lld a){
    lld temp = a;
    lld reverse = 0;
   while( temp != 0 )
   {
      reverse = reverse * 10;
      reverse = reverse + temp%10;
      temp = temp/10;
   }
   if(reverse == a)
        return 1;
    else
        return 0;

}

int main(){
    unsigned long long int i,j;
    int *primes;
    int z = 1;
    lld count  = 0;
    primes = malloc(sizeof(int)*LIMIT);
    lld ans = 0;
    lld m_limit = (lld)10000000;
    lld qwe[100000];
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

    // printf("%lld",myprimes[count-1] );

    // for(i=0;i<25;i++)
    //         printf("%lld\n ",myprimes[i]);


    // for(i=0;i<count;i++){
    //     for(j=i;j<count;j++){
    //         // printf("%lld\n",myprimes[i]);
    //         if( (myprimes[i]*myprimes[j])<=m_limit ){
    //             printf("For primes %lld and %lld \n",myprimes[i],myprimes[j] );
    //             ans++;
    //         }else
    //             break;
    //     }
    // }
    // printf("ans = %lld\n",ans);

    lld counta = 0;
    for(i=0;i<count;i++){
        if( /*Zis_Palin(myprimes[i]) &&*/ testprime(myprimes[i])){
            qwe[counta++] = myprimes[i];

            printf("mul = %lld num = %lld \n",testprime(myprimes[i]),myprimes[i]);
        }    
    }


    // printf( "%lld",is_Palin(12344321));



        // testprime(29);

return 0;
}


