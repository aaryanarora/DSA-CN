//Given an integer array (of length n), find and return all the subsets of input array.
//Subsets are of length varying from 0 to n, that contain elements of the array.
// But the order of elements should remain same as in the input array.
//Note : The order of subsets are not important.

#include<bits/stdc++.h>
using namespace std;
int subset(int input[], int n, int output[][20]) {

 if(n==0) {
      output[0][0]=0;
      return 1;
  }

  int smallOutput = subset(input+1,n-1,output);
  for(int i=0;i<smallOutput;i++) 
  {
    int col = output[i][0] +1;
    output[i+smallOutput][0] = col;
    output[i+smallOutput][1] = input[0];
    for(int j=2; j<col+1;j++)
	{
    	output[i+smallOutput][j] = output[i][j-1];
    }

  }

  return 2*smallOutput;
}
int main()
{
	int n;
	cin>>n;
	int *x = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int a[30][20];
	int num= subset(x,n,a);
	for(int i =0;i<num;i++)
	{
		for(int j=1;j<a[i][0]+1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

