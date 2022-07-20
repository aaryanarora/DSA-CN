//You have been given an integer array/list(ARR) and a number 'num'. 
//Find and return the total number of pairs in the array/list which sum to 'num'.
//Note:
//Given array/list can contain duplicate elements.

#include <bits/stdc++.h>
using namespace std;
 
// Function to find the count of pairs
int getPairsCount(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
       
        // Lower bound from i+1
        int y = lower_bound(arr + i + 1,
                            arr + n, x) - arr;
         
        // Upper bound from i+1
        int z = upper_bound(arr + i + 1,
                            arr + n, x) - arr;
        c = c + z - y;
    }
    return c;
}
 
// Driver code
int main()
{
	int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    int k ;
    cin>>k;
   
    // Function call
    cout << getPairsCount(arr, n, k);
    delete arr;
    return 0;
}




