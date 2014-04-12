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
 
lld crownumber[10000001] = {0};
map< lld , int > m;
map< lld , int >::iterator it;


int iscrow(lld c){
	// double a;
	// a = 1.0 + sqrt(1+(4*3*2*a));
	// a = a/6;
	// if( (a - (lld)a)>0 )
	// 	return 0;
	// else
	// 	return 1;
	

	if( m.find(c) == m.end() ){
		return 0;
	}
	else
		return 1;
}


int main(){
	lld i,z,n,j,k,t,h,ans = 0;
	lld a,b,c,d;
	
	for(i=1;i<=1000000;i++){
		lld n = (i*(3*i-1))/2;
		crownumber[i] = n;
		m[n] = 1;
	}

	// for(i=0;i<=100;i++){
	// 	printf("%lld ans isitcrow = %d\n",crownumber[i],iscrow( crownumber[i]));
	// }

	// for(i=0;i<=100;i++){
	// 	printf("%lld ans isitcrow = %d\n",i,iscrow(i));
	// }

	// for(i=0;i<)
	if( iscrow(crownumber[4]+crownumber[7]) && iscrow(crownumber[7]-crownumber[4])){
				cout << crownumber[i] << " " << crownumber[i] << endl;
		}	



	for( i=1;i<10000;i++ ){
		for( j=1;j<10000;j++ ){
			if( iscrow(crownumber[i]+crownumber[j]) && iscrow(crownumber[i]-crownumber[j])){
				cout << i << " " << j << " "  << crownumber[i] << " " << crownumber[j] << endl;
				cout << "add :"  <<crownumber[i]+crownumber[j] << "Sub ::  " << crownumber[i]-crownumber[j] << endl ;
			}	
		}
	}
 
	return 0;
}