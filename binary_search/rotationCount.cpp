#include<iostream>
#include<algorithm>
using namespace std;

int findCount(int arr[],int n)
{
	int min=arr[0],pos=-1;
	for(int i=1;i<n;i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
			pos = i;
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
	cout<<"Rotation Count is : "<<findCount(arr,n);
}