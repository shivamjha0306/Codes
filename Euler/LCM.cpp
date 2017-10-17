#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else return gcd(b,a%b);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         int a[n];
        long int lcm,x;
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        if(n==0){
            lcm=0;
            goto p;
        }

        if(n==1){
            lcm=1;
            goto p;
        }
        lcm=2;
       for(int i=1;i<n-1;i++){
         x=  gcd(lcm,a[i+1]);
      //   cout<<"Gcd = "<<x<<"\n";
           lcm= lcm*a[i+1] / x;
        //   cout<<"lcm = "<<lcm<<endl;

       }
        p:
        cout<<lcm<<endl;
    }

    return 0;
}
