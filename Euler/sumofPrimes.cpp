# include <bits/stdc++.h>

using namespace std;

int prime1(long int n){

     bool prime[n+1];
     memset(prime, true, n+1);

    for(long int p=2;p * p <=n ;p++)
    {

        if(prime[p] == true){
            for(long int i=p*2;i<=n; i+=p)
{//cout<<j<<"\t";
            prime[i]=false;

}
        }
    }
    long long int sum=0;
    int j;
    for(int i=2;i<=n;i++){

        if(prime[i]==true ){

                cout<<i<<"\t";
            sum+=i;
        }

    }
  return sum;

}
int main()
{
    int t;
    long int n;
    cin>>t;
    while(t--){
      cin>>n;
  cout<<"sum="<<prime1(n);
    }

    return 0;
}
