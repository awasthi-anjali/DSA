
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string longest(string names[], int n)
    {
        int k,ans=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;names[i][j]!='\0';j++)
            count++;
            if(count>ans)
            {
                ans=count;
                k=i;
            }
            
        }
        return names[k];
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}
