//Given an integer n, using phone keypad find out all the possible 
//strings that can be made using digits of input n.
//Return empty string for numbers 0 and 1.
//Note : 1. The order of strings are not important.
//2. Input and output has already been managed for you. 
//You just have to populate the output array and return 
//the count of elements populated in the output array.

#include<bits/stdc++.h>
using namespace std;
int keypad(int n,string* v)
{
	if(n == 0 || n==1)
	{
		v[0] = "";
		return 1;
	}
	string s2 = "abc";
	string s3 = "def";
	string s4 = "ghi";
	string s5 = "jkl";
	string s6 = "mno";
	string s7 = "pqrs";
	string s8 = "tuv";
	string s9 = "wxyz";
	int temp = n%10;
	int smallsize = keypad(n/10,v);
	string repl;
	switch(temp)
	{
		case 2: repl = s2;break;
		case 3: repl = s3;break;
		case 4: repl = s4;break;
		case 5: repl = s5;break;
		case 6: repl = s6;break;
		case 7: repl = s7;break;
		case 8: repl = s8;break;
		case 9: repl = s9;break;
		default: cout<<"Wrong input";
	}
	for(int i=0;i<repl.size();i++)
	{
		for(int j=0;j<smallsize;j++)
		{
			v[i*smallsize + j] = v[j];
		}
					
	}
	for(int i=0;i<repl.size();i++)
	{
		for(int j=0;j<smallsize;j++)
		{
			v[i*smallsize + j] = v[i*smallsize + j] + repl.substr(i)[0] ; 
		}
					
	}
	return repl.size()*smallsize;
}
int main()
{
	int n;
	cin>>n;
	string *v = new string[1000];
	int size= keypad(n,v);
	for(int i=0;i<size;i++)
	{
		cout<<v[i]<<endl;
	}
}
