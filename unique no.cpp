#include<bits/stdc++.h>
using namespace std;
int unique(int a[], int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans^a[i];
	}
	cout<<ans<<endl;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	unique(a, n);
	return 0;
}
