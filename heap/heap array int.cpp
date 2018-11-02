#include <iostream>
#include<vector>
using namespace std;

class heap
{
vector<int> v;
bool minHeap;

bool compare(int a,int b)
{
    if(minHeap)
    return a<b;
    else
    return a>b;
}

public:
heap(bool type = true)
{
    minHeap =  type;
    v.push_back(INT8_MIN);
}

void push(int d)
{
    v.push_back(d);
    int index = v.size()-1;
    int parent = index/2;

    while(index>1 && compare(v[index],v[parent]))
    {
        swap(v[index],v[parent]);
        index = parent;
        parent = index/2;
    }
}

int top()
{
    if(!empty())
         return v[1];
}

bool empty()
{
    return v.size() == 1;
}

};


int main() {
    // cout<<"Hello World!";
    heap h1(false);

    // Random no generator code
    //  srand (time(NULL)); 
    // int range = max - min + 1;
    // int num = rand() % range + min;

     srand (time(NULL));  // different seed value each time

    for(int i=0;i<10;i++)
    {  
        
        int rn = rand() % 100 + 27;
        h1.push(rn);
        cout<<i+1<<" Inserting "<<rn<<endl;
    }

    // while(!h1.empty())
    {cout<<h1.top()<<",";
    
    }

}
