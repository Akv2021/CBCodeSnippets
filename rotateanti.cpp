#include <iostream>
using namespace std;

void rotateanti(int a[1000][1000],int n)
{
  int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n)/2;j++)
        {
            temp = a[i][j];
            a[i][j] = a[i][n-1-j];
            a[i][n-1-j] = temp;
        }
    }

}

int main() {
    int n,a[1000][1000],temp;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             cin>>a[i][j];
         }
     }

    rotateanti(a,n);
    rotateanti(a,n);
    rotateanti(a,n);
    
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }



     return 0;
}
