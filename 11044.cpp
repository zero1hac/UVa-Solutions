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
	int n1,n2;
	scanf("%d",&T);
	while(T--){
		scanf("%d%d", &n1,&n2);
		cout<<(n1/3)*(n2/3)<<endl;
	}
	return 0;
	}
