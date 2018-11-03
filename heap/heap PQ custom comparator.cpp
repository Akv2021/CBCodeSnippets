// https://ide.codingblocks.com/s/38053
// car question : find nearest k cars

#include <iostream>
#include <queue>
#include <functional>
#include <vector>

using namespace std;

class car
{
    int x,y,id;
    public :
   
    bool near;
    car(int x,int y,int id,bool type = true)
    {
        this->id = id;
        this->x = x;
        this->y = y;
        near = type;
    }

    int dist()
    { 
        return x*x + y*y;
    }

    void print()
    {
        cout<<"Id : "<<id;
        cout<<", coordinates : "<<x<<","<<y;
        cout<<" , Dist : "<<dist()<<endl;
    }
};



class carCompare{
public:
bool operator()(car a,car b)
{
if(a.near)
return a.dist()>b.dist();   //min
else
return a.dist()<b.dist();   //max
}
};
int main() {
    // cout<<"Hello World!";
    priority_queue<car,vector<car>,carCompare> pq;

    srand(time(NULL));
    int i = 10;

    while(i>0)
    {
        int x = rand() % 100 +(-50);
        int y = rand() % 100 +(-50);
        car c(x,y,(10-i+1),true);
        cout<<"inserting "<<(10-i+1)<<" : "<<x<<","<<y<<endl; 

        pq.push(c);
        i--;
    }

    int k = 3;

    while(!pq.empty() && k>0)
    {
        car c2 = pq.top();
        c2.print();
        pq.pop();
        k--;
    }
    return 0;
}
