#include<bits/stdc++.h>
using namespace std;
bool isBadVersion(int n,int bad)
{
	if(n == bad)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int firstBadVersion(int n, int bad) {
        int low=1, high=n;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(!isBadVersion(mid, bad)) low=mid+1;
            else high=mid-1;
        }
        return low;
         }

int main()
{
	int n;
	cin>>n;
	int bad;
	cin>>bad;
	cout<<firstBadVersion(n, bad)<<endl;
	return 0;
}
