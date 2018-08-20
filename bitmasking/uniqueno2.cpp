// UNIQUE NUMBERS - II
// We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

// https://ide.codingblocks.com/#/s/21797
// Sample Input:
// 4
// 3 1 2 1
// Sample Output:
// 2 3

#include <iostream>
using namespace std;
int findUnique(int *a,int n,int x)
{
    // int temp = x;
    int count = 0;
    while(x>0)
    {
        if((x&1)!=0)    
        break;
        else
        count++;
        x>>=1;          // copy of x is changed.
    }
    int mask;
    mask = 1<<count;
    int num1=0;
    for(int i =0;i<n;i++)
    {
        if((mask&a[i])!=0)
        num1 ^= a[i];
    }
    return num1;
}
int main() {
    int n,a[100000],x;
    cin>>n;
    cin>>a[0];
    x=a[0];
    // cout<<"a[0] : "<<a[0]<<"\t x : "<<x<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        x = x^a[i];
        // cout<<"a["<<i<<"] : "<<a[i]<<"\t x : "<<x<<endl;
    }
    // cout<<x<<endl;
    int num1 = findUnique(a,n,x);
    int num2 = x^num1;

    num1<num2 ? cout<<num1<<" "<<num2 : cout<<num2<<" "<<num1;


    
return 0;
}
