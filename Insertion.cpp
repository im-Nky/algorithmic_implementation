#include<iostream>
using namespace std;		//Insertion sort

int main()
{
	int i,key,j;
	//int arr[]={213,234,2,412,4532,432,4,3,43,5};
	int arr[10];	
	cout<<"Enter Values in array\n";
	for(i=0;i<10;i++)	
	{
		cin>>arr[i];
	}
	for(i=1;i<10;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;		
	}
	for(i=0;i<10;i++)
	{
		cout<<"\n"<<arr[i];
	}		
}

