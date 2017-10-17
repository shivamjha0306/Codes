#include <bits/stdc++.h>
using namespace std;

// 4* a[n-1] + a[n-2]
int main() {

    int t;
    cin>>t;

    while(t--){

         unsigned long long int c,n=30,m,t,i,sum=0;
         cin>>m;
        t=n;
         unsigned long long int a[n];
         a[0]=2;
         a[1]=8;
         i=1;c=1;
         while(n>2){
           i++;
           a[i]= 4 * a[i-1]  + a[i-2];
           c=i;
           n--;
         }

         for(i=0;i<t;i++){

                  if(a[i]>m){
                    break;
                  }
                  else{
                      //   cout<<a[i]<<"\n";
                      sum+=a[i];
                  }

         }

      cout<<sum<<endl;
    }
    return 0;
}
