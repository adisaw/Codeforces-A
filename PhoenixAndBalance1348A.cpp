#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		int num;
		cin>>num;
		if(num==2)
		{
			cout<<"2"<<endl;
		}
		else
		{
			long long a=pow(2,num);
			for(int i=1;i<num/2;i++)
			{
				a=a+pow(2,i);
			}
			long long b=0;
			for(int i=num/2;i<num;i++)
			{
				b=b+pow(2,i);
			}
			cout<<a-b<<endl;
		}
		n--;
	}
}
