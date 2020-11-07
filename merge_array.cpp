// Merge two sorted arrays 
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int v1[]={1,4,6,8,11,15,19};
	int v2[]={2,5,6,9,13,17,21,25,31};
	int n1 = sizeof(v1)/sizeof(v1[0]);
	int n2 = sizeof(v2)/sizeof(v2[0]);
	int n = n1+n2;	
	int v[n];
	int i=0,j=0,k=0;
	//cout <<"check point 1"<<endl;	
	while(i<n1 && j<n2)
	{
		if(v1[i] < v2[j])
		{
			v[k]=v1[i];
			i++;
			k++;
		}	
		else
		{
			v[k]=v2[j];
			j++;
			k++;
		}
	}

	while(i<n1)
	{
		v[k]=v1[i];
		i++;
		k++;	
	}

	while(j<n2)
        {
                v[k]=v2[j];
                j++;
                k++;
        }


	for(int l=0;l<n;l++)
	{
		cout<<v[l]<<"\t";
	}
	cout << endl;
	cout <<n1 <<endl;
	cout <<n2 << endl;
	cout <<n <<endl;
}
