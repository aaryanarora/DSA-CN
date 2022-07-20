//Sort an array A using Quick Sort.
//Change in the input array itself. So no need to return or print anything.

#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
	int temp = a;
	a=b;
	b=temp;
}
int partition(int a[],int sind,int eind)
{
	int c=0,num;
	for(int i =sind;i<=eind;i++)
	{
		if(a[i]<=a[sind])
		{
			c++;
		}
	}
	num=c-1;
	int newnum = sind+num;
	swap(a[sind],a[newnum]);
	int i=sind,j=eind;
	while(i<newnum && j>newnum)
	{
		if(a[i]>=a[newnum])
		{
			if(a[j]<a[newnum])
			{
				swap(a[i],a[j]);
			}
			else
			{
				j--;
			}
		}
		else
		i++;
	}
	return newnum;
}
void quick_sort(int a[],int sind,int eind)
{
	if(sind>=eind)
	{
		return;
	}
	int c = partition(a,sind,eind);
	quick_sort(a,sind,c-1);
	quick_sort(a,c+1,eind); 
}
int main()
{
	int n;
	cin>>n;
	int sind =0,eind = n-1;
	int *a = new int[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	quick_sort(a,sind,eind);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}


