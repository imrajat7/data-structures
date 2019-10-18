#include<iostream>
#include<algorithm>
using namespace std;

void findPairs(int arr[],int n,int sum)
{
	int low=0,high=n-1;
	while(low<high)
	{
		if(arr[low]+arr[high] == sum)
		{
			cout<<"("<<arr[low]<<","<<arr[high]<<")\n";
		}
		if(arr[low]+arr[high] > sum)
			high--;
		else
			low++;
	}
}

int main()
{
	int n;
	cout<<"Enter Size";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int sum;
	cout<<"Enter No to find Pairs : ";
	cin>>sum;
	sort(arr,arr+n);
	findPairs(arr,n,sum);
}