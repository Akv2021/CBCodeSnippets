#include <iostream>
using namespace std;
int main(int argc, char** argv) {
cout<<"bool         : "<<sizeof( bool) <<" bytes"<<endl;
cout<<"char         : "<<sizeof( char) <<" bytes"<<endl;
cout<<"short        : "<<sizeof( short)<<" bytes"<<endl;
cout<<"char16_t     : "<<sizeof( char16_t) <<" bytes"<<endl;
cout<<"char32_t     : "<<sizeof( char32_t) <<" bytes"<<endl;
cout<<"wchar_t      : "<<sizeof( wchar_t) <<" bytes"<<endl;
cout<<"int          : "<<sizeof( int ) <<" bytes"<<endl;
cout<<"float        : "<<sizeof( float) <<" bytes"<<endl;
cout<<"long         : "<<sizeof( long) <<" bytes"<<endl;
cout<<"long long    : "<<sizeof( long long)<<" bytes"<<endl;
cout<<"double       : "<<sizeof( double) <<" bytes"<<endl;
cout<<"long double  : "<<sizeof( long double) <<" bytes"<<endl;

// cout<<"auto : "<<sizeof( auto) <<" bytes"<<endl;
// cout<<"long : "<<sizeof( long) <<" bytes"<<endl;
// cout<<"long : "<<sizeof( long) <<" bytes"<<endl;
return 0;
}