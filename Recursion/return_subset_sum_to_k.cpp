//Given an array A of size n and an integer K, return all subsets of A which sum to K.
//Subsets are of length varying from 0 to n, that contain elements of the array. 
//But the order of elements should remain same as in the input array.
//Note : The order of subsets are not important.

#include<bits/stdc++.h>
using namespace std;
int subset(int input[], int n,int si, int output[][20],int k) {

 if(n==si) {
 	
 	if(k==0)
 	{
 		output[0][0]=0;
      	return 1;
	}
	else
	{
		return 0;
	}
      
  }	
	
	int out1[30][20];
	int out2[30][20];
	int smallOutput1 = subset(input,n,si+1,out1,k);//excluding
	int smallOutput2 = subset(input,n,si+1,out2,k-input[si]);//including
	int row=0;
    for(int i=0 ;i<smallOutput1;i++)
    {
        for(int j=0 ;j<=out1[i][0];j++ )
        {
           output[row][j]=out1[i][j];
        }
        row++;
    }
	for(int i=0 ;i<smallOutput2;i++)
    {
        output[row][0]=out2[i][0]+1;
        output[row][1] = input[si];
        for(int j=1 ;j<=out2[i][0];j++ )
        {
           output[row][j+1]=out2[i][j];
        }
        row++;
    }
	return row;
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
	int k;
	cin>>k;
	int a[30][20];
	int num= subset(x,n,0,a,k);
	for(int i =0;i<num;i++)
	{
		for(int j=1;j<a[i][0]+1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

