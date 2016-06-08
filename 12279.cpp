/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<cstdio>
#include<iostream>
using namespace std;

int main(){
	int c1,c2=0,c3,c4,ans,N;

	while(scanf("%d",&N), (N !=0)){
		int count=0,num=N;
		while(N--){
			scanf("%d",&c1);
			if(c1==0)count++;
		}
		cout<<"Case "<<++c2<<": "<<(num-count) - count<<endl;

	}
return 0;
}
