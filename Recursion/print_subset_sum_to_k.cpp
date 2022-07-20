//Given an array A and an integer K, print all subsets of A which sum to K.
//Subsets are of length varying from 0 to n, that contain elements of the array. 
//But the order of elements should remain same as in the input array.
//Note : The order of subsets are not important. Just print them in different lines.

#include<bits/stdc++.h>
using namespace std;
void subset(int *x,int n,int k,int temp,unordered_map<int,bool> check)
{
	if(n==0)
	{
		return;
	}
	if(x[0] == temp)
	{
		if(check[k-x[0]])
		{
			cout<<k-x[0]<<" "<<x[0];
			cout<<endl;
		}
		
	}
	subset(x+1,n-1,k,temp,check);
	subset(x+1,n-1,k,temp-x[0],check);

	
}
int main()
{
	int n;
	cin>>n;
	unordered_map<int,bool> check;
	int *x = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		check[x[i]] = true;
	}
	int k;
	cin>>k;
	subset(x,n,k,k,check);

}
