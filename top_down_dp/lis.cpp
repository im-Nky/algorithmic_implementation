#include<bits/stdc++.h>
using namespace std;

int t[5];

int LIS(int *arr,int n,int curr,int priv) {
	if(curr==n) return 0;

	//if(t[curr]!=0) return t[curr];

	int exclude = LIS(arr,n,curr+1,priv);

	int include = 0;
	if(priv < arr[curr]) { 
		include = 1 + LIS(arr,n,curr+1,arr[curr]);
	}
	//t[priv][curr] = max(include,exclude);
	return max(include,exclude);
}

int main() {
	int n=5;
	int arr[5]={2,3,1,0,6};
	memset(t,1,sizeof(t));
	//res.resize(n,-1);
	int ans = LIS(arr,n,0,INT_MIN);
	cout <<"ans "<< ans <<endl;
	/*for(int i:res)
		cout << i << " ";*/
	//cout << endl;
	return 0;
}
