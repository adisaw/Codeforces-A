#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	while(num>0)
	{
		long long m,n,a,b;
		cin>>m>>n;
		cin>>a>>b;
		if(m>=0 && n>=0)
		{
			if(m>n)
			{
				long long cost=n*b+(m-n)*a;
				cout<<cost<<endl;
			}
			else
			{
				long long cost=m*b+(n-m)*a;
				cout<<cost<<endl;
			}
		}
		if(m<0 && n<0)
		{
			if(m<n)
			{
				long long cost=-n*b+(n-m)*a;
				cout<<cost<<endl;
			}
			else
			{
				long long cost=-m*b+(m-n)*a;
				cout<<cost<<endl;
			}
		}
		if(m*n<0)
		{
			long long cost=abs(m)*a+ abs(n)*a;
			cout<<cost<<endl;
			
		}
		num--;
	}
}
