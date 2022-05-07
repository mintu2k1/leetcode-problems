#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n)
{
	int s=0;
	int e=n;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e)
	{
		int square =mid*mid;
		if(square= n)
		{
			ans=mid;
		}
		else if(square<n)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
}
int mySqrt(int x)
{
	return binarySearch(x);
}
int main()
{
	int x = 36;
	cout<<"square root is = "<<mySqrt(x)<<endl;
	return 0;
}
