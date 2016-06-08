/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<cstdio>
#include<iostream>
#include<cstring>
#define ll long long int
using namespace std;

ll findSumming(ll T){
	if(T/10 == 0)return T;
	else{
		int sum=0;
		while(T!=0){
			sum+=T%10;
			T/=10;
	}
	return findSumming(sum);
	}
	}


int main(){
		ll T,l,h,w,cases=0;
		while(scanf("%lld",&T), (T!=0)){
			cout<<findSumming(T)<<endl;

	}
return 0;
}
