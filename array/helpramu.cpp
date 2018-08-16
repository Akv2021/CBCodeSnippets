// https://hack.codingblocks.com/contests/c/255/104


#include<iostream>
using namespace std;
int main() {
    
    int t,c1,c2,c3,c4,m,n,rickcost,cabcost,finalcost;
    int rick[1000] = {0},cab[1000] = {0};
    
    cin>>t;
    while(t)
    {
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        
        for(int i =0; i<n; i++)
        {
            cin>>rick[i];
        }
         for(int i =0; i<m; i++)
        {
            cin>>cab[i];
        }
        
        rickcost = 0;
        for(int i=0; i<n; i++)
        {
            rickcost += min(c1*rick[i],c2);
        }
        rickcost = min(rickcost,c3);
        
        cabcost = 0;
        for(int i=0; i<m; i++)
        {
            cabcost += min(c1*cab[i],c2);
        }
        cabcost = min(cabcost,c3);
        
        finalcost = min(c4,rickcost+cabcost);
        
        
        cout<<finalcost<<endl;
        
        t--;
    }
	return 0;
}