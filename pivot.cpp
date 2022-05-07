#include<bits/stdc++.h>
using namespace std;

int getPivot(vector<int>& arr, int n)
{
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	while(s<e)
	{
		if(arr[mid]>=arr[0])
		{
			s=mid+1;
		}
		else
		{
			e=mid;	
		}
		mid=s+(e-s)/2;
	}
	cout<<"pivot is = "<<arr[s]<<endl;
	return s;
}
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"pivot index = "<<getPivot(arr, 5)<<endl;
	
	return 0;
}
