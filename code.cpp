#include<bits/stdc++.h>
using namespace std;

    int main() {
    	vector<int> tasks;
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>tasks[i];
		}
        vector<int>ans;
        sort(tasks.begin(),tasks.end());
        if(tasks[tasks.size()-1] != tasks[tasks.size()-2])
            {
                cout<<-1<<endl;
            }
            int count=0;
            for(int i=0;i<tasks.size()-1;i++)
            {
                if(tasks[i]==tasks[i+1])
                {
                    count++;
                }
                ans.push_back(count);
            }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]<2)
            {
               cout<<-1<<endl;
            }
        }
        cout<<ans.size()<<endl;
        return 0;
    }
