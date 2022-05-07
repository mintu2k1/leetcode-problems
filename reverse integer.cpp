#include<bits/stdc++.h>
using namespace std;

int Reverse(int x)
{
	int ans=0;
	while(x != 0)
	{
		int dig=x%10;
		if((ans>INT_MAX/10) || (ans<INT_MIN/10))
		{
			return 0;
		}
		ans=(ans*10) + dig;
		x=x/10;
	}
	return ans;
}

int main()
{
	int x;
	cin>>x;
	cout<<Reverse(x)<<endl;
	return 0;
}
