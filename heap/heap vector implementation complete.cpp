// heap vector implementation complete
// https://ide.codingblocks.com/s/38006

#include <iostream>
#include<vector>
using namespace std;

template <class T>
class heap
{
vector<T> v;
bool minHeap;

bool compare(T a,T b)
{
    if(minHeap)
    return a<b;
    else
    return a>b;
}

void heapify(int i)
{
    int minIndex = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <v.size() && compare(v[left],v[minIndex]))
    minIndex = left;

    if(right <v.size() && compare(v[right],v[minIndex]))
    minIndex = right;

    swap(v[minIndex],v[i]);

    if(minIndex!=i)
    heapify(minIndex);
}

public:
heap(bool type = true)
{
    minHeap =  type;
    v.push_back(INT8_MIN);
}

void push(  T d)
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

void pop()
{
 int last = v.size() - 1 ;
 swap(v[1],v[last]);
 //cout<<" Popping "<<v[last]<<endl;
 v.pop_back();

 heapify(1);
}

};


int main() {
    // cout<<"Hello World!";
    heap<int> h1(false);

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

     while(!h1.empty())
    {cout<<h1.top()<<",";
    h1.pop();
    }
    // To overwrite trailing comma
    // cout<<"\b \b"<<endl;

}
