//Given a string S, find and return all the possible permutations of the input string.
//Note 1 : The order of permutations is not important.
//Note 2 : If original string contains duplicate characters, permutations will also be duplicates.

#include<bits/stdc++.h>
using namespace std;
int permutations(string s,string v[])
{
	if(s.size() == 1)
	{
		v[0]=s[0];
		return 1;
	}
	 int index=0;
    for(int i=0 ;i< s.size();i++)
    {
        string smalloutput[1000];
        int ans= permutations(s.substr(0,i)+s.substr(i+1,s.size()-i-1),smalloutput);
        for(int j=0;j<ans;j++)
        {
            v[index++]=s[i]+smalloutput[j];
        }
    }
return index;

}
	
	

int main()
{
	string s;
	cin>>s;
	string v[100];
	int n = permutations(s,v);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<endl;
	}
}
