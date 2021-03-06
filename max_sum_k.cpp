// O(n) solution for finding maximum sum of a subarray of size k 
#include <iostream> 
using namespace std; 

int maxSum(int arr[], int n, int k) { 
	if (n < k) { 
	    cout << "Invalid"; 
	    return -1; 
	} 
	
        int res = 0;       // Compute sum of first window of size k 
	for (int i=0; i<k; i++) 
            res += arr[i]; 
    
	/* Compute sums of remaining windows by removing first element of previous window and adding last element of current window. */ 
	int curr_sum = res; 
	for (int i=k; i<n; i++) 
	{ 
	    curr_sum += arr[i] - arr[i-k]; 
	    res = max(res, curr_sum); 
	} 
	return res; 
}  
int main() { 
	int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}; 
	int k = 4; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << maxSum(arr, n, k); 
	return 0; 
}
