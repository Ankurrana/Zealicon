#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iostream>
#include <unistd.h>
#include <utility>
#include <vector>
#include <map>
#include <math.h>
 
#define getw getchar_unlocked
#define iterate(n) for(i=0;i<n;i++)
#define d_iterate(p,q) for(int i=p;i<=q;i++)
#define r_iterate(n,z) for(int i=n-1;i>=n-z;i--) /* z number of elements to the left of n */
#define p(n) printf("%d\n",n);
#define get(n) n = scan2();
// #define sort(k,q) qsort(k,q,sizeof(*k),comp);
#define print_array(k,n) iterate(n){ p(k[i]);}
#define ps(s) printf("%s\n",s);
#define repeat(n) for (int i = (0); i < n; i++)
#define clear(v) memset((v), 0, sizeof (v))
#define ALL(x) (x).begin(), (x).end()
#define mp make_pair;
#define pb push_back;
// int comp(const void *e1,const void *e2){ return *((const lld *)e1) - *((const lld *)e2);}
 
typedef unsigned long long int lld;
typedef unsigned long int ld;
using namespace std;
 
inline lld scan2(){
	lld n=0,s=1;
	char p=getw();
	if(p=='-') s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=getw();
	if(p=='-') s=-1,p=getw();
	while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=getw(); }
	return n*s;
}
 
int isprime(lld a){
	lld i,j,k,l;
	if(a%2 == 0) 
		return false;
	lld sr = sqrt(a);
	for(i=3;i<=sr;i=i+2){
		if(a%i == 0)
			return false;
	}

	return true;
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

lld test(lld a){
    lld sum = 0;
    lld mul = 1;
    lld z = a;
    while(a>0){
        sum = sum + (a%10);
        mul = mul * (a%10);
        a = a/10;
    }

    // printf("for prime = %lld , mul = %lld , subsquare = %lld\n",z,mul,sum*sum);

    if( mul == (sum*sum) )
        return 1;
    else
        return 0;
}
 
int main(){
	lld i,z,n,j,k,t,h,ans = 0;
	lld a,b,c,d;
	for(i=3;i<=900000000000;i++){
		if( is_Palin(i) && isprime(i) && test(i) )
			cout << i << endl;
	}
 
 	// iterate(100){
 	// 	if(isprime(i))
 	// 		cout << i << endl;
 	// }

 	// cout << isprime(145451) << is_Palin(145451) << test(145451) << endl;
	return 0;
}