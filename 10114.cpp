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
		ll T,mon;
		float owed, paid;
		while(scanf("%lld%f%f%lld",&T,&paid,&owed,&mon), (T>0)){
			float arr[101],val;
			int i=0,index;
			while(i<mon){
				scanf("%d%f",&index,&val);
				for(int j=index;j<101;j++)arr[j]=val;
				i++;
		}
		int currentMonth = 0;
		float priceInit = ( owed + paid ) * (1 - arr[0]);
		float monthlyPay = owed / (float)T;
		float currentOwed = owed;
		while(currentOwed > priceInit){
			currentMonth++;
			currentOwed -= monthlyPay;
			priceInit = priceInit *(1 - arr[currentMonth]);
			}
		cout<<currentMonth<<" month";
		if(currentMonth != 1)cout<<"s";
		cout<<endl;
	}


return 0;
}
