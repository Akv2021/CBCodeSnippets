// DIVISIBLE SUBARRAYS
// You are given N elements, a1,a2,a3….aN. Find the number of good sub-arrays.
// A good sub-array is a sub-array [ai,ai+1,ai+2….aj] such that (ai+ai+1+ai+2+….+aj) is divisible by N.

// https://ide.codingblocks.com/#/s/22001

#include <iostream>
#include<cstring>       // for using memset
using namespace std;

#define ll long long

int main() {
 int t,n;
 ll freq[100005],a[100005];
 cin>>t;
 while(t){
     memset(freq,0,sizeof freq);        // intialize all elements to zero;
     freq[0] = 1;                       // as cs[0] = 0;
     cin>>n;
    ll sum = 0;
     for(int i=0;i<n;i++){
         cin>>a[i];
         sum += a[i];           
         sum %= n;                  // we can also use different var. but here cs in not strictly req so taking mod wont change the ans    
         sum = (sum+n)%n;             // to take mod of -ve no. doesnt affect +ve
         freq[sum]++;               // counter increse corresponding to that
     }
    ll ans = 0;
    for(int i = 0;i<n;i++)
    {   ll m = freq[i];
        ans += (m*(m-1))/2;         // mC2
    }
    cout<<ans<<endl;
     t--;
 }   
    return 0;
}


// Sample Input:
// 2
// 5
// 1 1 1 1 1
// 5
// 5 5 5 5 5
// Sample Output:
// 1
// 15