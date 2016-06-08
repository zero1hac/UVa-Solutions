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
			ll farmers, tempFarmer, summed=0, a, b, c;
			cin>>farmers;
			tempFarmer = farmers;
			while(tempFarmer--){
				cin>>a>>b>>c;
				summed+=a*c;
			}
			cout<<summed<<endl;
		}

return 0;
}
