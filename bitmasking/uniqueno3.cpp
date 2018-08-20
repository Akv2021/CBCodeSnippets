// UNIQUE NUMBER - III
// We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

// https://ide.codingblocks.com/#/s/21793

#include <iostream>
using namespace std;

int findUni(int *a,int n){
    int ct[64] = {0};
    int temp,j;
    for(int i = 0;i<n;i++)
    {
        temp = a[i];
        j=0;
        cout<<"a["<<i<<"] : "<<a[i]<<" temp : "<<temp<<endl;
        // set bits
        while(temp>0)
        {
            ct[j] += (temp&1);
            
            cout<<"\t ct["<<j<<"] : "<<ct[j]<<" LSB : "<<(temp&1)<<endl;
            temp = temp>>1;
            j++;
        }
        for(int k = 0;k<j;k++)
        cout<<ct[k]<<" ";
        cout<<endl;
        
    }
    int p =1;
    int ans =0;
    for(int i = 0;i<64;i++)
        {
            ct[i] %= 3;
            ans += ct[i]*p;
            p = p<<1;

        }

        return ans;
}
int main() {
    int n,a[100000],x;
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<findUni(a,n);

return 0;
}
