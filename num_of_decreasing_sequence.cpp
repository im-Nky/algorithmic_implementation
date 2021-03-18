#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	vector <int> arr = {56,911,90,0,3,2,1,54,75,83,76,89,4,3,2,1,9,54,87};
	for(int i=0;i<arr.size();i++) {
		if((arr[i]==1) && (arr[i]=arr[i-1]+1)) {
			count++;	
		}
	}
	cout <<"Number of sequences are "<<count<<endl;
	return 0;
}
