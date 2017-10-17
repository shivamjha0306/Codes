#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n,i,max=0,m=0;
    cin>>n;
    long int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   /* for(i=0;i<n;i++)
   {
       cout<<a[i]<<"\n";
   }*/
     max=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>max)
        {

            m=a[i];
            a[i]=max;
            max=m;

        }
        else
        {
            a[i]=max;
        }
    }

    a[n-1]=0;
    for(i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }

    return 0;
}

