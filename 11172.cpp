/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int T;
	long long int n1,n2;
	scanf("%d",&T);
	while(T--){
		scanf("%lld%lld", &n1,&n2);
		if(n1>n2)cout<<">"<<endl;
		else if(n1<n2)cout<<"<"<<endl;
		else cout<<"="<<endl;
	}
	return 0;
	}
