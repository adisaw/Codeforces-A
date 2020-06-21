#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		string inp,ans="";
		cin>>inp;
		ans=ans+inp[0];
		for(int i=1;i<inp.length()-1;i=i+2)
		{
			ans=ans+inp[i];
		}
		ans=ans+inp[inp.length()-1];
		cout<<ans<<endl;
		t--;
	}
}