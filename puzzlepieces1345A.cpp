#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n,m;
		cin>>n>>m;
		if(m==1 || n==1)
			cout<<"YES"<<endl;
		else if(n==2 && m==2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		t--;
	}

}