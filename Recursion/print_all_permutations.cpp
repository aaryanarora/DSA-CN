//Given an input string (STR), find and return all possible permutations of the input string.
//Note:
//The input string may contain the same characters, so there will also be the same permutations.
//The order of permutations doesn’t matter.


#include<bits/stdc++.h>
using namespace std;
void permute(string a, int l, int r)  
{  
    // Base case  
    if (l == r)  
        cout<<a<<endl;  
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
}  
int main(){
    string input;
    cin >> input;
    permute(input,0,input.size()-1);
    return 0;
}
