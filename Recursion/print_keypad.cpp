//Given an integer n, using phone keypad find out and print 
//all the possible strings that can be made using digits of input n.
//Note : The order of strings are not important. 
//Just print different strings in new lines.

#include<bits/stdc++.h>
using namespace std;
void keypad(int n,string v)
{
	if(n==0||n==1)
	{
		cout<<v<<endl;
		return;
	}
	int temp = n%10;
	string repl;
	switch(temp)
	{
		case 2: repl = "abc";break;
		case 3: repl = "def";break;
		case 4: repl = "ghi";break;
		case 5: repl = "jkl";break;
		case 6: repl = "mno";break;
		case 7: repl = "pqrs";break;
		case 8: repl = "tuv";break;
		case 9: repl = "wxyz";break;
	}
	int q = n/10;
	for(int i =0;i<repl.size();i++)
	{
		keypad(q,repl.substr(i)[0]+v);
	}
	
}
int main()
{
	int n;
	cin>>n;
	string v;
	keypad(n,v);

}
