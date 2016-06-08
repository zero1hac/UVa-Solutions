/* zeroonehacker
 * Dushyant Kumar Mishra
 * Mathematics and Computing Part III
 * Indian Institute of Technology Varanasi
 */
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int pos=0;
string coms[101];
void change_pos(string com){
		if(com.compare("LEFT")==0){pos-=1;cout<<"LOL";}
		else if(com.compare("RIGHT")==0)pos+=1;
		else{
			cout<<com.length();
			int temp = std::stoi(com.substr(8,com.length()-8));

			change_pos(coms[temp-1]);
		}
	}


int main(){
	int T;
	cin>>T;
	while(T--){
		int num;
		cin>>num;
		int i=0;
		while(num--){
			string temp;
			getline(cin,temp);
			coms[i] = temp;
			cout<<coms[i];
			change_pos(temp);
			i++;
		}
		cout<<pos<<endl;
		pos=0;
		}


return 0;
}
