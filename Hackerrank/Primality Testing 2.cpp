#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
 int c=0;
bool prime[5000001];
//vector<long long int>v(5000001,-1);
void SieveOfEratosthenes()
{

    memset(prime, true, sizeof(prime));
int k=0;
    for (long long int p=2; p*p<=5000001; p++)
    {

        if (prime[p] == true)
        {

            for (long long int i=p*2; i<=5000001; i += p)

                prime[i] = false;

        }
    }


}
int main()
{
        ios::sync_with_stdio(0);
         cin.tie(0);
    cout.tie(0);
long long int t;
cin>>t;
SieveOfEratosthenes();
while(t--)
{

long long int n1;
cin>>n1;
  // cout<<prime[]<<endl;
      if(n1==0 || n1==1){
          cout<<"no"<<endl;
      }
     else  if(prime[n1]==1){
            cout<<"yes"<<"\n";
         }
         else{
            cout<<"no"<<"\n";
         }
}
return 0;
}

