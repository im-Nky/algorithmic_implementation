/*Longest Incresing Subsequence in O(nlogn)*/


#include <bits/stdc++.h>
using namespace std;

vector <int> res;

int lis(int * arr, int n) {
	res.push_back(arr[0]);
	for(int i=1;i<n;i++) {
		if(res.back()<arr[i]) {
			res.push_back(arr[i]);
		} else {
			int index = lower_bound(res.begin(),res.end(),arr[i])-res.begin(); // pointer - pointer
			res[index] = arr[i];
		}
	}
	return res.size();
}

int main() {
	int arr[] = {2,5,3,7,11,8,10,13,6};
	int n = 9;
	int k=lis(arr,n);
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
	//cout << lis(arr,n) << endl;
	return 0;
}
