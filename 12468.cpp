/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
		int s,d;
		while(scanf("%d%d",&s,&d),(s!=-1 && d!=-1)){
			int last=100 - fabs(d-s);
			int direct = fabs(d-s);
			if(direct<last)cout<<direct<<endl;
			else cout<<last<<endl;
			}
return 0;
}
