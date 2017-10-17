#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int  dig(long long int n)
{
    long long int y=0,x;
    while(n>0)
    {
        x=n%10;
        y+=x;
        n/=10;
    }
    return y;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,sum=0,sum2=0,i,j=0;
    int flag=0;
    cin>>n;
    sum=dig(n);
   // cout<<"sum="<<sum<<endl;
    while(n%2==0)
    {
        sum2+=2;
        n/=2;
    }
 // cout<<"Sum2 ist part "<<sum2<<"\n"<<"N is "<<n<<"\n";

    for(i=3;i<pow(n,0.5)+1;i=i+2)
    {
        while(n%i==0)
        {
            j=dig(i);
            sum2+=j;
            n/=i;
        }
    }
  //  cout<<"sum2 2nd "<<sum2<<"\n";
    if(n>2)
    {
        j=dig(n);
        sum2+=j;
    }

    if(sum==sum2)
    {
        flag=1;
    }

    cout<<flag<<endl;

    return 0;
}

