// HELP RAMU
// Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

// Public transport is not free. There are 4 types of tickets:

// A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
// A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
// A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
// A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

// Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.

// https://ide.codingblocks.com/#/s/21800

#include <iostream>
using namespace std;
int main() {
    int t,c1,c2,c3,c4,m,n;

    cin>>t;
    while(t)
    {
        cin>>c1>>c2>>c3>>c4;
        cin>>n>>m;
        int rickcost = 0,cabcost = 0;

        int *rick = new int[n];
        int * cab = new int[m];

        for(int i=0; i<n; i++)
        {
            cin>>rick[i];
            rickcost += min(c1*rick[i],c2);
        }
        rickcost = min(rickcost,c3);

        for(int i=0;i<m;i++)
        {
            cin>>cab[i];
            cabcost += min(cab[i]*c1,c2);
        }
        cabcost = min(cabcost,c3);

        int ans = min(c4, rickcost+cabcost);

        cout<<ans<<endl;

        delete [] rick;
        delete [] cab;
        t--;
    }
    return 0;
}

// Sample Input:
// 2
// 1 3 7 19
// 2 3
// 2 5
// 4 4 4
// 4 3 2 1
// 1 3
// 798
// 1 2 3
// Sample Output:
// 12
// 1