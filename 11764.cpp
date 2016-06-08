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
			int N, curr_wall, last_wall, high=0, low=0;
			cin>>N;
			cin>>last_wall;
			--N;
			while(N--){
				cin>>curr_wall;
				if(curr_wall > last_wall)high++;
				if(curr_wall < last_wall)low++;
				last_wall = curr_wall;
			}
			cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
			i++;

	}
return 0;
}
