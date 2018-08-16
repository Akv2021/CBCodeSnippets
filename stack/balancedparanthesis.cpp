// BALANCED PARENTHESIS
// You are given a string of '(' and ')'. You have to check whether the sequence of parenthesis is balanced or not. For example, "(())", "(())()" are balanced and "())(", "(()))" are not.
// https://ide.codingblocks.com/#/s/21234

#include <iostream>
using namespace std;
int main() {
    string s;
    int res=0,i=0;
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]=='(')
        res++;
        else
        res--;
        i++;
    }
    if(!res)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}
