#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int * arr,int n, int sum) {
	if(sum == 0) return true;

	if(n == 0) return false;

	if(arr[n-1]<=sum) 
		return subset_sum(arr,n-1,sum)||subset_sum(arr,n-1,sum-arr[n-1]);
	return subset_sum(arr,n-1,sum);
}

int main() {
	int arr[] = {2,3,7,8,10};
	int sum = 11;
	int n = sizeof(arr)/sizeof(arr[0]);
	if(subset_sum(arr,n,sum)==true)
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return 0;
}
