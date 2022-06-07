// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{
	vector<string> v;
	queue<string> q;
	q.push("1");
	while(N--)
	{
	   string s=q.front();
	   v.push_back(s);
	   q.pop();
	   q.push(s+"0");
	   q.push(s+"1");
	}
	
	return v;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  