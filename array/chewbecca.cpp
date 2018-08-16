// https://hack.codingblocks.com/contests/c/262/62

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    
    long long int n,temp,m=0;
    int len = 0,ai;
    cin >> n;
    temp = n;
    while(temp)
    {
        ai = temp % 10;
        temp = temp / 10;
        
        if(9-ai < ai)
        {  
            m = m + pow(10,len)*(9-ai);
            len++;
        }
        else
        {
            m = m + pow(10,len)*(ai);
            len++;
        }
     
    }
    if(n/m >10)
    {
        m = pow(10,len-1)*9 + m;
    }
    cout<<m;
    
	return 0;
}