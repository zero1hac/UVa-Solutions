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
		int N, B, H, W ;
		while(scanf("%d%d%d%d",&N,&B,&H,&W)!= EOF){
			int price, vac=0, min_price=500001, x;
			while(H--){
				int vac1=0;
				int w=0;
				cin>>price;
				while(w<W){
					cin>>x;
					if(x>=N)vac1=1;
				w++;
				}
				if(vac1==1 && price<=min_price){min_price=price;vac=1;}
			}
			if(vac==0 || min_price*N >=B)cout<<"stay home\n";
			else cout<<min_price*N<<endl;

			}
	return 0;
}
