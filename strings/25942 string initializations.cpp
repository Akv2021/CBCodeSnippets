// https://ide.codingblocks.com/#/s/25941
// String initializations

#include <iostream>
using namespace std;
int main() {
    char a[] = {'a','b'};       // size = 2     (no null added)
    cout<<a<<" this"<<endl;        // Does give garbage value after ab sometimes.
    cout<<sizeof(a)<<endl;

    char b[] = "ba";            // size = 2 + 1 (null added by compiler)
     cout<<b<<endl;
    cout<<sizeof(b)<<endl;

    char c[5] = {'s','g','k'};
    cout<<c<<endl;
    cout<<c[-1]<<endl;      //  garbage value
    cout<<c[3]<<endl;       //  garbage value (not NULL)
    cout<<c[5]<<endl;       //  garbage value
    cout<<sizeof(c)<<endl;        //  size given at time of allocation

    // char d[5] = "hellos";   //error: initializer-string for array of chars is too long
    // char d[5] = "hello";        //error: initializer-string for array of chars is too long
    // char d[5] = "helo" ;            // works
    // char d[5]  = 5;             // error: array must be initialized with a brace-enclosed initializer
    // char d[5] = {65};                   // works . store ASCII symbol equivalent to int. Similar for {65,66}
    // char d[5] = {65,66,66,65,67};           // works. Allows nth element as well. (perhaps that overrides null )
    //    char d[5] = {65.2};             // typeconversion error . double to char . error: narrowing conversion of '6.5200000000000003e+1' from 'double' to 'char' inside { }
    char d[5] = {"aade"};            // only allows one string. Of length n-1
    
    cout<<"here "<<d<<endl;
    cout<<sizeof(d)<<endl;

}
