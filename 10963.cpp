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

int main(){
		ll T,mon;
		float owed, paid;
		cin>>T;
		while(T--){
			int north,south,yes=1;
			int W;
			cin>>W;
			cin>>north>>south;
			int diff = north - south;
			W--;
			while(W--){
				cin>>north>>south;
				if(diff!= north - south)yes = 0;
			}
			if(yes==1)cout<<"yes\n";
			else cout<<"no\n";
			if(T)cout<<endl;
	}
return 0;
}
