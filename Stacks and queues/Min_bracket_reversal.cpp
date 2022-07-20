//For a given expression in the form of a string, find the minimum number of brackets 
//that can be reversed in order to make the expression balanced. 
//The expression will only contain curly brackets.
//If the expression can't be balanced, return -1.
//Example:
//Expression: {{{{
//If we reverse the second and the fourth opening brackets, the whole expression will get balanced. 
//Since we have to reverse two brackets to make the expression balanced, the expected output will be 2.
//
//Expression: {{{
//In this example, even if we reverse the last opening bracket, we would be left with the first
//opening bracket and hence will not be able to make the expression balanced and the output will be -1.

#include <bits/stdc++.h>
using namespace std;

int countMinReversals(string expr)
{
    int len = expr.length();

    if (len%2 !=0)
        return -1;
  
   
    stack<char> s;
    for (int i = 0; i < len; i++) {
        if (expr[i] == '}' && !s.empty()) {
            if (s.top() == '{')
                s.pop();
            else
                s.push(expr[i]);
        }
        else
            s.push(expr[i]);
    }
  

    int red_len = s.size();
  
    // count opening brackets at the end of
    // stack
    int n = 0;
    while (!s.empty() && s.top() == '{') {
        s.pop();
        n++;
    }
  
    // return ceil(m/2) + ceil(n/2) which is
    // actually equal to (m+n)/2 + n%2 when
    // m+n is even.
    return (red_len / 2 + n % 2);
}
  

int main()
{
    string expr;
    cin>>expr;
    cout << countMinReversals(expr);
    return 0;
}
