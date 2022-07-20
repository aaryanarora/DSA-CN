//Given is the code to print numbers from 1 to n in increasing order recursively. 
//But it contains few bugs that you need to rectify 
//such that all the test cases pass.

#include<iostream>
using namespace std;

void printnum(int x)
{
	if(x > 0)
	{
		printnum(x-1);
		cout<<x<<" ";
	}
	else 
	return;
	
}
int main()
{
	int x;
	cin>>x;
	printnum(x);
}

