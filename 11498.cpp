/*Dushyant Kumar
zeroonehacker
Mathematics and Computing Part III
IIT BHU
*/

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int T;
	int K;
	int x,y;
	int m,n;
	cin>>T;
	while(T!=0){
		cin>>m>>n;
	while(T--){
		cin>>x>>y;
		if(m==x || n==y)cout<<"divisa"<<endl;
		if(m<x && n<y)cout<<"NE"<<endl;
		if(m>x && n<y)cout<<"NO"<<endl;
		if(m>x && n>y)cout<<"SO"<<endl;
		if(m<x && n>y)cout<<"SE"<<endl;
		
		}
	cin>>T;
}
return 0;

}

