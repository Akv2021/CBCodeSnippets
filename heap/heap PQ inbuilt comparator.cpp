// https://ide.codingblocks.com/s/38044

#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
int main() {
    // cout<<"Hello World!";
    priority_queue<int,vector<int>,greater<int>> pmin;

    srand(time(NULL));
    int i=10;
    while(i>0)
    {
        int rn = rand() % 100 + 80 ;
        // cout<<(10-i+1)<<" : "<<rn<<",";
        cout<<rn<<",";
        pmin.push(rn);
        i--;
    }
    cout<<endl;

    while(!pmin.empty())
    {
        cout<<pmin.top()<<",";
        pmin.pop();
    }
    return 0;
}
