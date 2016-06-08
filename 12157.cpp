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
		int T,i=0;
		cin>>T;
		while(T--){
			int num,cal_time,pack_mile=0,pack_juice=0;
			cin>>num;
			while(num--){
				cin>>cal_time;
				pack_mile+=(cal_time/30)+1;
				pack_juice+=(cal_time/60)+1;
			}
			pack_mile*=10;
			pack_juice*=15;
			if(pack_mile>pack_juice)cout<<"Case "<<++i<<": "<<"Juice "<<pack_juice<<endl;
			else if(pack_mile<pack_juice)cout<<"Case "<<++i<<": "<<"Mile "<<pack_mile<<endl;
			else cout<<"Case "<<++i<<": "<<"Mile Juice "<<pack_juice<<endl;
		}
return 0;
}
