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

lld reverse(lld a){
	lld ans = 0;
	while(a>0){
		ans = (ans*10) + a%10;
		a = a/10; 
	}
	return ans;
}
 
lld nextnum(lld a){
	lld b = a;
	lld c = a;
	map< int,int > m;
	lld num = 0;

	map< int,int >::iterator it;

	map< int,int > isoccured;
	int z[10] = {0};

	while(b>0){
		m[ b%10 ]++;
		b = b/10;
	}

	for(it=m.begin();it!=m.end();it++){
		cout << "Fre "  << it->second << " num " << it->first << endl; 
	}	

	lld revesed_ans = 0;
	
	while(c > 0){
		
		if( z[c%10]== 0 ){
			z[c%10] = 1;
			revesed_ans =  (revesed_ans*10) + (c%10);
			revesed_ans = (revesed_ans*10) + m[c%10];

		}
		c = c/10;
	}

	// printf("%lld\n", reverse(revesed_ans) );
	return reverse(revesed_ans);

}



// void gengreennumbers(lld a){

// 	map< lld, int > m;
// 	lld count  = 0;
// 	if( m.find(a) == m.end() && count<500 ){
// 		//if the number is not present
// 		m[ a ] = 1;
// 		a = nextnum(a);
// 		cout << a << endl ; 

// 	}else{
// 		if(count < 500)
// 			cout << "repeatition at : " << a << endl;
// 		else
// 			cout << "No repeattition till " << a << endl;
// 	}





// }



 
int main(){
	lld i,z,n,j,k,t,h,ans = 0;
	lld a,b,c,d;
	
 	// nextnum(123123);

 	// gengreennumbers(3);
 	a = 2;
 	for(i=0;i<30;i++){
		cout << a << endl;
		a = nextnum(a) << endl;
	
	}
	return 0;
}