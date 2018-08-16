// https://www.geeksforgeeks.org/maximum-length-bitonic-subarray/
// https://ide.codingblocks.com/#/s/20128

#include <iostream>
using namespace std;
int main() {
    int t,n,len,temp,max;

    cin>>t;
    while(t)
    {
        cin>>n;
        int a[n],inc[n],dec[n];
        
        len = 1;
        inc[0] = len;
        cin>>a[0];
        // cout<<"inc[0] : "<<inc[0]<<endl;
        for(int i = 1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>a[i-1])
            len++;
            else
            len=1;

            inc[i] = len;
            // cout<<"inc["<<i<<"] : "<<inc[i]<<endl;
        }

        len = 1;
        dec[n-1] = len;
        temp = inc[n-1]+dec[n-1]-1;
        max = temp;
        for(int i = n-2; i >= 0; i--)
        {
            if(a[i] > a[i+1])
            len++;
            else
            len = 1;
            dec[i] = len;

            temp = inc[i]+dec[i]-1;
            if(temp>max)
            max = temp;
        }

        cout<<max<<endl;
        t--;
    }
}
