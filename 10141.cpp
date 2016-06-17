/*zeroonehacker
 * Dushyant Kumar Mishra
 * Indian Institute of Technology Varnasi
 * Mathematics and Computing Part III
 *
 */
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
	int n, p;
	string x;
	int count = 0;
	while (scanf("%d%d",&n,&p), n || p) {
		count++;
		double price = 2000000000, q;
		int req = -1, rm;
		string name, temp;

		for (int i = 0; i < n; i++) {
			cin.ignore();
			getline(cin, x);
		}

		while (p--) {
			getline(cin,temp);
			scanf("%lf %d\n", &q, &rm);
			if (rm > req) {
				req = rm;
				name = temp;
				price = q;
			} else if (rm == req && p < price) {
				req = rm;
				name = temp;
				price = q;
			}

			for (int i = 0; i < rm; i++) {
				getline(cin, x);
			}
		}

		if (count > 1)
			cout << endl;
		cout << "RFP #" << count << endl;
		cout << name << endl;
	}

	return 0;
}
