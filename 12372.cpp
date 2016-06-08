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
		int T,l,h,w,cases=0;
		cin>>T;
		while(T--){
		cin>>l>>h>>w;
		if(l<=20 && h<=20 && w <=20)cout<<"Case "<<++cases<<": good"<<endl;
		else cout<<"Case "<<++cases<<": bad"<<endl;
	}
return 0;
}
