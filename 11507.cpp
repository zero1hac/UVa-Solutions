#include <bits/stdc++.h>
using namespace std;

bool sign_change(char curr_axis, char c1, char c2){
	if(curr_axis == 'x' && c1 == '-') return true;
	if(curr_axis == 'y' && c2 == 'y' && c1 == '+') return true;
	if(curr_axis == 'z' && c2 == 'z' && c1 == '+') return true;
	return false;
}

int main(){
	int L;
	char in[3];
	while(1){
		scanf("%d", &L);
		if (L==0)break;
		L--;

		int sign = 1;
		char axis='x';
		for(int i=0;i<L;i++){
			scanf("%s", in);
			if(in[0] == 'N') continue;

			if(sign_change(axis, in[0], in[1])) sign = -sign;

			if(axis=='x') axis=in[1];
			else if(axis=='y' && in[1] == 'y') axis='x';
			else if(axis=='z'&& in[1] == 'z') axis='x';

	}
		printf("%c%c\n",sign==1?'+':'-',axis);
	}
	return 0;

}
