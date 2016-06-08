/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */
#include<cstdio>
using namespace std;

int main(){
	int c1,c2,c3,c4,ans;
	while(scanf("%d%d%d%d",&c1,&c2,&c3,&c4), (c1 || c2 || c3 || c4)){
		ans=1080;
		ans += (c1 - c2 ) > 0 ? (c1 - c2 ) *9 : (c1 - c2 + 40) *9;
		ans += (c3 - c2 ) > 0 ? (c3 - c2 ) *9 : (c3 - c2 + 40) *9;
		ans += (c3 - c4 ) > 0 ? (c3 - c4 ) *9 : (c3 - c4 + 40) *9;
		printf("%d\n",ans);
	}
return 0;
}
