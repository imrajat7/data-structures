#include<iostream>
#include<algorithm>
using namespace std;

struct Job
{
	char id;
	int deadline;
	int profit;
};

bool comparison(Job a, Job b)
{
	return (a.profit > b.profit);
}

void findJobScheduling(Job arr[],int n)
{
	sort(arr, arr+n, comparison);

	char result[n];
	int slot[n] = {false};

	for(int i=0;i<n;i++)
	{
		for(int j=min(n,arr[i].deadline)-1; j>=0; j--)
		{
			if(slot[j] == false)
			{
				result[j] = arr[i].id;
				slot[j] = true;
				break;
			}
		}
	}

	cout<<"Sequence is : ";
	for(int i=0;i<n;i++)
	{
		if(slot[i])
		{
			cout<<result[i]<<" ";
		}
	}
	cout<<"\n";

}

int main()
{
	Job arr[] = {{'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27}, {'d', 1, 25}, {'e', 3, 15}};
	findJobScheduling(arr,5);
}