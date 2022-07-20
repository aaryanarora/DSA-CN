//Input arrays/lists can contain duplicate elements.
//The intersection elements printed would be in the order they appear in the first sorted array/list(ARR1).

#include<iostream>
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
void intersect(int n,int a[],int m,int b[])
{
	merge_sort(a,0,n-1);
	merge_sort(b,0,m-1);
	int i=0,j=0;
	while(i<=n-1 && j<m-1)
	{
		if(a[i]==b[j])
		{
			cout<<a[i]<<" ";
			i++;
			j++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	int *b = new int[m];
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	intersect(n,a,m,b);
	delete a;
	delete b;
}
