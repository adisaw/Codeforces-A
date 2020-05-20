#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int val=n;
	while(val>0)
	{
		int rem=val%10;
		if(rem!=4 && rem!=7)
				return -1;
		val=val/10;
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int ans=check(n);
	
	if(ans==1)
	{
		cout<<"YES";
		return 0;
	}
	for(int i=4;i<=n/2;i++)
	{
		if(n%i==0)
		{
			ans=check(i);
			if(ans==1)
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";

}