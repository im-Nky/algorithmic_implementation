#include <bits/stdc++.h>
using namespace std;

int mcm(int * arr,int i,int j) {
	int mini=INT_MAX;
	if(i==j) return 0;
	for(int k=i;k<j;k++) {
		int temp = mcm(arr,i,k) + mcm(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
		if(temp<mini)
			mini=temp;
	}
	return mini;
}

int main() {
	int arr[] = {40,20,30,10,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	//cout << i << j;
	cout << "Mini no of Multiplication "<<mcm(arr,1,n-1)<<endl;
	return 0;
}
