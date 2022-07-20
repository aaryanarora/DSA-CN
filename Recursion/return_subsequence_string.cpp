//Return Subsequences of a string Recursively

#include<bits/stdc++.h>
using namespace std;
int subset(string s,string* v)
{
	if(s.size() == 0)
	{
		v[0] = "";
		return 1;
	}
	int smallsize = subset(s.substr(1),v);
	for(int i=0;i<smallsize;i++)
	{
		v[i+smallsize] = s[0] + v[i];
	}
	return 2*smallsize;
}
int main()
{
	string s;
	cin>>s;
	string *v = new string[1000];
	int n = subset(s,v);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<endl;
	}
	delete [] v;
}
