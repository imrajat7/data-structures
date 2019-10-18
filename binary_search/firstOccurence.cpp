#include<iostream>
#include<algorithm>
using namespace std;

int findOccurences(int arr[],int s,int e,int no)
{
	int pos = -1;
	while(s<=e)
	{
		int m = (s+e)/2;
		if(arr[m] == no)
		{
			pos = m;
			e = m-1;
		}
		else if(arr[m] < no)
		{
			s = m+1;
		}
		else
		{
			e = m-1;
		}
	}
	return pos;
}

int main()
{
	int n;
	cout<<"Enter Size";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements : ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int no;
	cout<<"Enter No to find Occurence : ";
	cin>>no;
	sort(arr,arr+n);
	cout<<"First Position is : "<<findOccurences(arr,0,n-1,no);
}