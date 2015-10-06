#include<iostream>
#include<stack>

using namespace std;
void printBin(int n)
{
	int dig;
	
	stack<int> binDigit;
	while(n!=0)
	{
		dig=n%2;
		n=n/2;
		binDigit.push(dig);
	}
	while(!binDigit.empty())
	{
		cout<<binDigit.top();
		binDigit.pop();
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n+1;i++)
	{
		printBin(i);
		cout<<endl;
	}
}
