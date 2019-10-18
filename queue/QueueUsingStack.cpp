#include<iostream>
#include<stack>
using namespace std;

stack<int> s1,s2;

void enQueue(int data)
{
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}

	s1.push(data);

	while(!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
}

int deQueue()
{
	if(s1.empty())
	{	
		cout<<"No data in Queue";
		exit(1);
	}

	int d = s1.top();
	s1.pop();
	return d;
}

int main()
{
	enQueue(1); 
    enQueue(2); 
    enQueue(10); 
  
    cout << deQueue() << '\n'; 
    cout << deQueue() << '\n'; 
    cout << deQueue() << '\n'; 
}