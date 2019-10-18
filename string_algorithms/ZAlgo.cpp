#include<iostream>
using namespace std;

void calZ(string concat,int Z[]);

void searchIndex(string text,string pattern)
{
	string concat = pattern + "$" + text;
	int l = concat.length();
	int Z[l];
	calZ(concat,Z);
	for(int i=0;i<l;i++)
	{
		if(Z[i] == pattern.length())
		{
			cout<<"Pattern Found at : "<<i-pattern.length()-1<<"\n";
		}
	}
}

void calZ(string concat,int Z[])
{
	int n = concat.length();
	int L=0,R=0;
	Z[0] = 0;
	for(int i=1;i<n;i++)
	{
		L = R = i;
		while(R<n && concat[R-L] == concat[R])
			R++;
		Z[i] = R-L;
	}
}

int main()
{
	string text = "rajatisrajat"; 
    string pattern = "raj"; 
    searchIndex(text, pattern); 
    return 0; 
}