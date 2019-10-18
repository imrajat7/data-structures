#include<iostream>
#include<algorithm>
using namespace std;

int findElement(int arr[],int s,int e,int n)
{
	while(s<=e)
	{
		int m = (s+e)/2;
		if(arr[m] == n)
			return 1;
		else if(arr[m] < n)
			s = m+1;
		else
			e = m+1;
	}
	return 0;
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
	cout<<"Enter No to find Search : ";
	cin>>no;
	if(findElement(arr,0,n-1,no))
		cout<<"Element Found";
	else
		cout<<"Not Found";
}