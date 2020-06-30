#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		double priceone=(double)b/(double)c;
		if(a*b==c)
		{
			cout<<"1 -1"<<endl;

		}
		else if(a>=c)
		{
			cout<<"-1 "<<b<<endl;
		}
		else
		{
			if(c<b*a)
				cout<<"1 "<<b<<endl;
			else
				cout<<"1 -1"<<endl;
		}
		t--;

	}
}