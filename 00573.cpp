/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;

int main(){
	float u, curr_h;
	int h, d, f;
	while(1){
		scanf("%d%f%d%d", &h, &u, &d, &f);
		if(h==0)break;
		int day=1;
		float k = u*f/100.0, curr_u=u;
		curr_h=0;
		while(1){
			curr_h += curr_u;
			if(curr_u > 0) curr_u-=k;
			if(curr_h > h) break;
			curr_h-=d;
			if(curr_h<0)break;
			day++;
		}
		if(curr_h<0) cout<<"failure on day "<<day<<endl;
		else cout<<"success on day "<<day<<endl;
	}

	return 0;
}
