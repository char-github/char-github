#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	bool isprime=1;
	for(int i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<"the given no. is not prime";
			break;
		}
	}
	if(count==0)
	{
		cout<<"the given no. is prime";
	}
}
