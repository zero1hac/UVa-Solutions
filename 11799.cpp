/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int main(){
		int T,  i=0;
		cin>>T;
		while(T--){
			int N, max=0,c;
			cin>>N;
			while(N--){
				cin>>c;
				if(c>=max)max=c;
			}
			cout<<"Case "<<++i<<": "<<max<<endl;
	}
return 0;
}
