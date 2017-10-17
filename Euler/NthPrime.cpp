#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
bool prime[1000001];
vector<long long int>v(1000001,-1);
void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));

    for (long long int p=2; p*p<=1000000; p++)
    {

        if (prime[p] == true)
        {

            for (long long int i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }

long long int sum=0,c=1;
  for (long long int p=2; p<=1000000; p++)
{
       if (prime[p])
{
          v[c++]=p;
}
}
/*for(long i=1;i<c;i++){
    cout<<v[i]<<"  ";
}*/
}
int main()
{
long int t;
cin>>t;
SieveOfEratosthenes();
while(t!=0)
{
t--;
long long int n1;
cin>>n1;
cout<<v[n1]<<endl;
}
return 0;
}
