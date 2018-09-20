// Split Strings
// https://ide.codingblocks.com/#/s/27523

#include <iostream>
using namespace std;
int main() {
    char s[100],s1[100],s2[100],s3[100];
    int t;
    cin>>t;
    while(t)
    {
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;s[i]!='\0';i++)
    {   int ch = s[i];
        if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
        {s1[a] = s[i];
        a++;
        }
        else if(ch>=48 && ch<=57)
        {
            s2[b] = s[i];
            b++;
        }
        else
        {
        s3[c] = s[i];
        c++;
        }
    }

    s1[a] = '\0';
    s2[b] = '\0';
    s3[c] = '\0';

    for(int i=0;s1[i] != '\0';i++)
    cout<<s1[i];

    cout<<endl;

    for(int i=0;s2[i] != '\0';i++)
    cout<<s2[i];

    cout<<endl;

    for(int i=0;s3[i] != '\0';i++)
    cout<<s3[i];

    cout<<endl;

    t--;
    }

}
