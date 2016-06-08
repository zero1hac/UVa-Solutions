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
		ll T,l,h,w,cases=0;
		char A[10];
		cin>>T;
		while(scanf("%s",A), strcmp(A,"*")!=0){
			if(strcmp(A,"Hajj") == 0){cout<<"Case "<<++cases<<": Hajj-e-Akbar"<<endl;}
			else cout<<"Case "<<++cases<<": Hajj-e-Asghar"<<endl;
	}
return 0;
}
