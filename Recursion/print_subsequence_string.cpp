//Print Subsequences of a string Recursively

#include<bits/stdc++.h>
using namespace std;
void subset(string s,string v)
{
	if(s.size()==0)
	{
		cout<<v<<endl;
		return;
	}
	
	subset(s.substr(1),v);//Not including
	subset(s.substr(1),v + s[0]);//including
}
int main()
{
	string s;
	cin>>s;
	string v = "";
	subset(s,v);
}
