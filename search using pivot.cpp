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

int binarySearch(vector<int>& arr, int s, int e, int target)
{
	s=0, e=arr.size()-1;
        int mid= s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(arr[mid]==target)
            {
                ans=mid;
                return mid;
            }
            else if(arr[mid]<target)
            {
                s=mid+1;
            }
            else if(arr[mid]>target)
            {
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        return -1;
}
int findPosition(vector<int>& arr, int n, int target)
{
	int pivot=getPivot(arr, n);
	if(arr[pivot]<=target && target<=arr[n-1])
	{
		return binarySearch(arr, pivot, n-1, target);
	}
	else
	{
		return binarySearch(arr, 0, pivot-1, target);
	}
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
	int target;
	cin>>target;
	cout<<"target index is = "<<findPosition(arr, n, target)<<endl;
	return 0;
}
