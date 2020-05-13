#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
	for(int i=3;i*i<=n;i=i+2)
	{
		if(n%i==0)
		{
			return i;
		}
	}
	return n;
}
int main()
{
	int count;
	cin>>count;
	while(count>0)
	{
		int n,k;
		cin>>n>>k;
		for(int i=0;i<k;i++)
		{
			if(n%2==0)
			{
				n=n+2*(k-i);
				break;
			}
			else
			{
				n=n+f(n);
			}
		}
		cout<<n<<endl;
		count--;
	}
}
