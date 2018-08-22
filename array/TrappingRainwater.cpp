// Rainwater trapping
// https://www.geeksforgeeks.org/trapping-rain-water/

// https://ide.codingblocks.com/#/s/22015

#include <iostream>
using namespace std;
int main() {
    int a[100] = {0},left[100]={0},right[100]={0};
    int n,sum=0;
    cin>>n;
    cin>>a[0];
    left[0] = a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        left[i] = max(left[i-1],a[i]);
    }
    right[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        right[i] = max(right[i+1],a[i]);
    }
    sum = 0;
    int top = 0;
    for(int i=0;i<n;i++)
    {
        top = min(left[i],right[i])-a[i];
        sum += top;
    }

    cout<<sum<<endl;

}
