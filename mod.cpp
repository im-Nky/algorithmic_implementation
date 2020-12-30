/* caluclating Mod without usng division operator */

#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int b = 0;
	if(b!=0) {
		while(a>0) {
			a = a -b;
		}
		cout << a+b;
	} else {
		cout << a;
	}
	return 0;
}
