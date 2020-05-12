#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t][2];
	for(int i=0;i<t;i++)
	{
		cin>>arr[i][0];
		cin>>arr[i][1];
	}
	for(int i=0;i<t;i++)
	{
		cout<<arr[i][0]+arr[i][1]<<endl;
	}
}
