#include<bits/stdc++.h>
using namespace std;

int  firstOccurance(vector<int>& arr, int n,int key)
{
	int s=0, e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int  lastOccurance(vector<int>& arr, int n,int key)
{
	int s=0, e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int main()
{
	int n, key;
	cin>>n;
	cin>>key;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	cout<<firstOccurance(arr, n, key)<<endl;
	cout<<lastOccurance(arr, n, key)<<endl;
	int sol = lastOccurance(arr, n, key) - firstOccurance(arr, n, key);
	cout<<sol<<endl;
	return 0;
}
