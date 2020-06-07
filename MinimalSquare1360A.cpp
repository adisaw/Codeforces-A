#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int a,b;
		cin>>a>>b;
		int s1=2*b;
		int s2=2*a;
		int max1=a>s1?a:s1;
		int max2=b>s2?b:s2;
		int min=max1<max2?max1:max2;
		cout<<min*min<<endl;
		t--;
	}
}