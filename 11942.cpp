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
		cout<<"Lumberjacks:\n";
		while(T--){
			int N,asc=0, desc=0, last_val, curr_val;
			i=1;
			cin>>last_val;
			while(i<10){
				cin>>curr_val;
				if(last_val >= curr_val)desc++;
				if(last_val <= curr_val)asc++;
				last_val = curr_val;
				i++;
			}
			if(asc==9 || desc==9)cout<<"Ordered\n";
			else cout<<"Unordered\n";
	}
return 0;
}
