/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */

#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
		int T,  j=0;
		cin>>T;
		while(T--){
			int i=0, k, max=0;
			string temp;
			vector <string> main_string;
			int arr[10];
			while(i<10){
				cin>>temp;
				main_string.push_back(temp);
				cin>>k;
				arr[i]=k;
				if(k>=max)max=k;
				i++;
			}
			cout<<"Case #"<<++j<<":\n";
			i=0;
			while(i<10){
				if(arr[i] == max)cout<<main_string[i]<<endl;
				i++;
			}
		}


return 0;
}
