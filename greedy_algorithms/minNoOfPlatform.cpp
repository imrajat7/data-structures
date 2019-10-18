#include<iostream>
#include<algorithm>
using namespace std;

int findPlatforms(int arr[],int dept[],int n)
{
	sort(arr,arr+n);
	sort(dept,dept+n);

	int i=1,j=0,platform=1,result=1;

	while(i<n && j<n)
	{
		if(arr[i] <= dept[j])
		{
			platform++;
			i++;

			if(platform>result)
				result = platform;
		}
		else
		{
			platform--;
			j++;
		}
	}
	return result;
}

int main()
{
	int arr[] = {900, 940, 950, 1100, 1500, 1800};
	int dept[] = {910, 1200, 1120, 1130, 1900, 2000};

	cout<<"Total Platforms required : "<<findPlatforms(arr,dept,6)<<"\n";
}