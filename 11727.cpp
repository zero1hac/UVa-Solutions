/*Dushyant Kumar
zeroonehacker
Mathematics and Computing Part III
IIT BHU
*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long long int T,n,k,A[3];
	cin>>T;
	n=1;
	while(n<=T){
		cin>>A[0]>>A[1]>>A[2];
		sort(A,A+3);
		cout<<"Case "<<n<<": "<<A[1]<<endl;
		n++;
		
}
return 0;

}

