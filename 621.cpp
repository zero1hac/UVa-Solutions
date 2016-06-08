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
		string A;
		cin>>T;
		//T = std:: stoi(A);
		while(T--){
			cin>>A;
			if(A.compare("1")==0 || A.compare("4")==0 || A.compare("78")==0)cout<<"+\n";
			else if(A[A.length()-1]=='5' && A[A.length()-2]=='3') cout<<"-\n";
			else if(A[0]=='9' && A[A.length()-1]=='4')cout<<"*\n";
			else if(A[0]=='1' && A[1]=='9' && A[2]=='0')cout<<"?\n";

	}
return 0;
}
