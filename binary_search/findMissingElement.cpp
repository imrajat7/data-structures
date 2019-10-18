#include<iostream>
#include<algorithm>
using namespace std;

int findElement(int arr[],int n)
{
	int total;
	total = ((n+1)*(n+2))/2;
	for(int i=0;i<n;i++)
		total -= arr[i];
	return total;
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
	cout<<"Element Missing is : "<<findElement(arr,n);
}