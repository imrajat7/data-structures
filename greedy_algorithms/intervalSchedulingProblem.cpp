#include<iostream>
#include<algorithm>
using namespace std;

struct Activities
{
	int start,finish;
};

bool comparison(Activities a,Activities b)
{
	return (a.finish < b.finish);
}

void scheduleActivites(Activities arr[],int n)
{
	sort(arr,arr+n, comparison);

	cout<<"Activities Scheduling : \n";
	int i=0;
	cout<<"("<<arr[i].start<<","<<arr[i].finish<<")\n";

	for(int j=1;j<n;j++)
	{
		if(arr[j].start >= arr[i].finish)
		{
			cout<<"("<<arr[j].start<<","<<arr[j].finish<<")\n";
			i=j;
		}
	}
}

int main()
{
	Activities arr[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
	scheduleActivites(arr,6);
}