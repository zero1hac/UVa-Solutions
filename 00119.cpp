/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */
#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
using namespace std;
char users[80][100];
int amount[80];
int N;

int return_index(char * temp){
	int i=0;
	while(i<N){
		if(strcmp(temp, users[i])==0)return i;
		i++;
	}
}

int main(){
	while(scanf("%d",&N)==1){
		int i=0;
		for(;i<N;i++){
			scanf("%s", users[i]);
			amount[i] = 0;
		}
		for(i=0;i<N;i++){
			char name[100], name1[100];
			int tot_amount, num;
			scanf("%s %d %d",name, &tot_amount, &num);
			int k=num;
			while(num>0){
				scanf("%s", name1);
				int t=return_index(name1);
				amount[t]+= tot_amount/k;
				num--;
			}
			int n=return_index(name);
			if(k>0)	amount[n]+= tot_amount%k;
			amount[n]-= tot_amount;
			//cout<<"Pika";
		}
		for(i=0;i<N;i++){
			printf("%s %d\n", users[i],amount[i]);
		}
		cout<<endl;

	}
	return 0;
}
