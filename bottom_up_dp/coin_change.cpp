/* Dynamic Programming : Coin Change Problem */

#include <bits/stdc++.h>
using namespace std;
int min_coins (int a[],int m,int N,int *dp, int n);

int main() {
	int N = 30;
	int n = N;
	int a[]={7,5,1};
	int dp[N+1];
	for(int i=0; i<N; i++)
		dp[i]=-1;
	int m = sizeof(a)/sizeof(a[0]);
	dp[0] = 0;	
	int ans = min_coins(a,m,N,dp,n);
	cout << "Minimum coins for " <<N<<" is "<<ans<<endl;

	/*cout << "The min coins for 1 to 18 is"<<endl;
	for(int i:dp){
		cout << i << " ";
	}
	cout << endl;*/
	return 0;
}

int min_coins (int a[], int m, int N,int *dp,int n) {
	int coins = INT_MAX;
	for(int i=0;i<m;i++) {
		if(N-a[i] >= 0) {	// for e.g. 18-7, 18-5, 18-1
			int subAns = 0;
			if(dp[N-a[i]] != -1) {
				subAns = dp[N-a[i]];
			} else {
				subAns = min_coins (a,m,N-a[i],dp,n);
			}
			if((subAns != INT_MAX) && (subAns+1<coins)) {	// subAns+1 b/c we already used 1 coin for  'N-a[i]'
				coins = subAns+1;
			}
		}
	}
	dp[N] = coins;
	return coins;
}
