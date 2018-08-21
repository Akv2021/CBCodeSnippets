// https://ide.codingblocks.com/#/s/21842
//  this code converts decimal to binary.

#include <iostream>
using namespace std;
void dtob(int d)
{
    int bin[64] = {0};
        int j=0;
        cout<<d<<" : ";
        while(d>0)
        {
            bin[j] = (d&1);
            d >>= 1;
            j++;
        }
        j--;
        while(j>=0)
        {
            cout<<bin[j];
            j--;
        }
        cout<<endl;
}
int main() {
    int t,d;
    // int bin[64];
    cin>>t;
    while(t)
    {
        cin>>d;
        dtob(d);
        t--;
    }
}
