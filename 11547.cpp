/*Dushyant Kumar
zeroonehacker
Mathematics and Computing Part III
IIT BHU
*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	long long int T,n,k;
	cin>>T;
	while(T--){
		cin>>n;
		 k = n*315 + 36962;
		k = (k/10);
		k = k%10;
		if(k<0)k*=-1;
		cout<<k<<endl;
}
return 0;

}

