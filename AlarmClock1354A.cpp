#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		long long rem=a-b;
		if(rem<=0)
		{
			cout<<b<<endl;
			t--;
			continue;
		}
		if(c-d<=0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			long long st=c-d;
			long long times=rem/st;
			long long stillrem=rem-times*st;
			long long ans;
			if(stillrem>0)
			{
				ans=b+(times+1)*c;
			}
			else
			{
				ans=b+times*c;
			}
			cout<<ans<<endl;
			
		}
		t--;
	}
}