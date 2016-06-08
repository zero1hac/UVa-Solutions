/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	char a;
	int flag=0,count=0;
	while(scanf("%c", &a) !=EOF){
		if(a!='\"'){printf("%c",a);}
		else {
			if(count%2 == 0){
				printf("``");
				count++;
			}
			else {
				printf("\'\'");
				count++;
			}
	}
}
return 0;

}
