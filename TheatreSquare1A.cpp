#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,n,a;
	cin>>m>>n>>a;
	long long x=ceil((double)n/a);
	long long y=ceil((double)m/a);
	long long ans = x*y;
	cout<<ans;
}
