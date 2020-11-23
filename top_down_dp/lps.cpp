# include <bits/stdc++.h>
using namespace std;

# define ma 1000

vector <char> us; 

int lcs(string s1,int m,string s2,int n,int t[][ma]) {
	if(m==0 || n==0) return 0;

	if(t[m-1][n-1]!=-1) return t[m-1][n-1];
	
	if(s1[m-1]==s2[n-1]){
		//us.push_back(s1[m-1]);
		t[m-1][n-1] = (1+lcs(s1,m-1,s2,n-1,t));
		return t[m-1][n-1];
	} else {
		t[m-1][n-1] = max (lcs(s1,m,s2,n-1,t),lcs(s1,m-1,s2,n,t));
		return t[m-1][n-1];
	}
}

int main() {
	string s1 = "agra";
	string s2 = s1;
	reverse(s2.begin(),s2.end());
	int t[s1.size()][ma];
	memset(t,-1,sizeof(t));
	cout<<"length of LCS is "<<lcs(s1,s1.size(),s2,s2.size(),t)<<endl;
	//cout<<"LCS : "<<endl;
	/*for(auto it:us) 
		cout<<it<<" ";*/
	return 0;
}

