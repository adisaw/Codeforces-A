#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int x,y,n;
		cin>>x>>y>>n;
		int rem=n%x;
		if(rem==y)
			cout<<n<<endl;
		else if(rem<y)
		{
			int ans=n-x+(y-rem);
			cout<<ans<<endl;
		}
		else if(rem>y)
		{
			int ans=n-(rem-y);
			cout<<ans<<endl;
		}
		t--;
	}
}