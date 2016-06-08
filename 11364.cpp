/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int T,k;
	long long int n1,n2,temp;
	n1 = 10000;
	n2 = 0;
	scanf("%d",&T);
	while(T--){
		n1=10000;
		n2 =0 ;
		scanf("%d",&k);
		while(k--){
		scanf("%lld", &temp);
		if(temp>=n2)n2=temp;
		if(temp<=n1)n1=temp;
	}
	cout<<2*(n2-n1)<<endl;
	}
	return 0;
	}
