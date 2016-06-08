/*Dushyant Kumar
zeroonehacker
Mathematics and Computing Part III
IIT BHU
*/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	long long int n;
	char A[15];
	n=1;
	while(n){
		cin>>A;
		if(A[0] == '#')break;
		if(strcmp(A,"HELLO")==0) cout<<"Case "<<n<<": ENGLISH"<<endl;
		else if(strcmp(A,"HOLA")==0) cout<<"Case "<<n<<": SPANISH"<<endl;
		else if(strcmp(A,"HALLO")==0) cout<<"Case "<<n<<": GERMAN"<<endl;
		else if(strcmp(A,"BONJOUR")==0) cout<<"Case "<<n<<": FRENCH"<<endl;
		else if(strcmp(A,"CIAO")==0) cout<<"Case "<<n<<": ITALIAN"<<endl;
		else if(strcmp(A,"ZDRAVSTVUJTE")==0) cout<<"Case "<<n<<": RUSSIAN"<<endl;
		else cout<<"Case "<<n<<": UNKNOWN"<<endl;
		n++;
		
}
return 0;

}

