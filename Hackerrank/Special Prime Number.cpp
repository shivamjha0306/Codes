#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int prime(int x) {
    if(x == 1) {
        return 0;
    }
    if(x == 2 || x == 3) {
        return 1;
    }
    for(int i =2; i * i <= x;i++){
    if(x % i == 0) {
        return 0;
    }
}
return 1;
}
int main() {
   long t,n,sum=1;
    cin>>t;
    while(t--)
    {
        sum = 1;
        cin>>n;
        for(int i=2;i<=sqrt(n);i++)
        {
          if(n%i==0)
          {
              sum+=i;

              if(i!=(n/i))
              {
                  sum+=n/i;
              }
          }

        }

        /*for(int i=2;i<sqrt(sum);i++)
        {
            if(sum%i==0)
            {
                cout<<"NO";
                break;
            }
            else
                cout<<"YES";
        }
            */
          if(prime(sum)) {
              cout << "YES\n";
          }else {
              cout << "NO\n";
          }

        }


    return 0;
}

