#include<iostream>
#include<fstream>
using namespace std;
int bubblesort(int arr[]);

int main()
{
	int m=0,arr[10];
	ofstream file_1;
	file_1.open("Unsort.txt");
	cout<<"Enter Values Upto 6 enteries";
	//int i;	
	//int arr[10]={432,143,24,324,3,343,43,43342,52,78};
	//cout<<"\nUnsorted Array\n";
	
	//for(i=0;i<10;i++)
	//{
		//cout<<arr[i]<<" ";
	//}
	
	int i=0;
	while(i<6)
	{
		cin>>m;
		file_1<<m<<endl;
		i++;
	}
	file_1.close();
	cout<<"Elements are stored in unsorted.txt";
	
	ifstream file_2;
	file_2.open("unsort.txt");
	int k=0;
	while(file_2>>m)
	{
		arr[k]=m;
		k++;
	}
	bubblesort(arr);			
	file_2.close();
	
	ofstream file_3;
	file_3.open("sorted.txt");    
    	cout<<"Array after bubble sort:";
    	for(i=0;i<k;++i)
	{
	    	file_3<<arr[i]<<endl;
	        cout<<" "<<arr[i];        
	}
    	cout<<"\nshorted integers are saved in sorted.txt";
}

int bubblesort(int list[])
{
	int temp,i,j;	
	for(i=0;i<9;i++)	
	{
		for(j=0;j<9;j++)
		{
			if(list[j]>list[j+1])
			{
								//swap elements				
				temp=list[j+1];
				list[j+1]=list[j];				
				list[j]=temp;	
			}
		}
	}
	cout<<"\nSorted Array\n";
	for(j=0;j<10;j++)
	{
		cout<<list[j]<<" "<<endl;
	}	
}
