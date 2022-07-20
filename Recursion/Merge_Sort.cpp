//Sort an array A using Merge Sort.
//Change in the input array itself. So no need to return or print anything.

#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int sind,int mid,int ind)
{
	int b[100];
	int i=sind,j=mid+1,k=sind;
	
	while(i<=mid && j<=ind)//jab tak saare elements poore nhi ho jaate
	{
		if(a[i]<=a[j])//agar first wala half ka chota elemnt toh voh jaega naye array mein
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k] = a[j];//agar second wala half ka chota elemnt toh voh jaega naye array mein
			j++;
		}
		
		k++;//new array ko aage badha rhe
	}
	
	if(i>mid) //agar pehle half k saare ho jae toh dossre half ke bache hue as it is copy krne h main array mein
	{
		while(j<=ind)//tabhi krna h yeh ki jab elements bach jae doosre mein thode
		{
			b[k]=a[j];
			k++;
			j++;
		}
	}
	else //agar doosre half k saare ho jae toh pehle half ke bache hue as it is copy krne h main array mein
	{
		while(i<=mid)
		{
			b[k]=a[i];//tabhi krna h yeh ki jab elements bach jae pehle mein thode
			k++;
			i++;
		}
	}
	
	for(int l=sind;l<=ind;l++)
	{
		a[l]=b[l]; //copying everything back to original array
	}
}
void merge_sort(int a[],int sind,int ind)
{
	if(sind>=ind) 
	{
		return;
	}
	int mid = (sind+ind)/2;
	merge_sort(a,sind,mid);//Divide the array into two halfs , this is first one
	merge_sort(a,mid+1,ind);//second half of divided array after mid
	merge(a,sind,mid,ind);//this merges both the divided parts after sorting individually
}
int main()
{
	int n;
	cin>>n;
	int sind =0,ind = n-1;
	int *a = new int[n];
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	merge_sort(a,sind,ind);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}

