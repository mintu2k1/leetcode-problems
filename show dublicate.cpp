#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a(n),ans;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			ans.push_back(a[i]);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
	cout<<ans[i]<<" ";
}
cout<<endl;
	return 0;
}
