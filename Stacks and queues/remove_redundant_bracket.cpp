//For a given expression in the form of a string, find if there exist any redundant brackets or not. 
//It is given that the expression contains only rounded brackets or parenthesis and the input 
//expression will always be balanced.
//A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary 
//or needless brackets.
//Example:
//Expression: (a+b)+c
//Since there are no needless brackets, hence, the output must be 'false'.
//
//Expression: ((a+b))
//The expression can be reduced to (a+b). Hence the expression has redundant brackets and the output will be 'true'.


#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool redundant(char a[])
{
	stack<char> s;
	for(int i =0;i<strlen(a);i++)
	{
		 if (a[i] == '(' || a[i] == '+' || a[i] == '-' || a[i] == '*' || a[i] == '/')
        {
            s.push(a[i]);
        }
        else if (a[i] == ')')
        {
            bool isRedundant = true;

            
            while (s.top() != '(')
            {
                 
                if (s.top() == '+' || s.top() == '-' || s.top() == '*' || s.top() == '/')
                {
                    isRedundant = false;
                }

                s.pop();
            }

            s.pop();

            if (isRedundant == true)
            {
                return true;
            }
        }
    }


    return false;
	
}
int main()
{
	char a[30];
	cin>>a;
	cout<<redundant(a);
	
}
