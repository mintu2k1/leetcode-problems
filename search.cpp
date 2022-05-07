#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
    
int main()
{
	int n;
	cin>>n;
	int target;
	cin>>target;
	vector<int> nums(n);
	for(int i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	 int s=0, e=nums.size()-1;
        int mid= s+(e-s)/2;
        int ans=-1;
        while(s<=e)
        {
            if(nums[mid]==target)
            {
                ans=mid;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            mid= s+(e-s)/2;
        }
        cout<<ans<<endl;
	return 0;
}
