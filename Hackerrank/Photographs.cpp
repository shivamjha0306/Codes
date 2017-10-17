#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

/*
int fact(long long int n){
      if(n==0 || n==1){
          return 1;
      }
    else return n*fact(n-1);

}*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

   long  long int n,m,p,sum=1;
    p=pow(10,9)+7;
    cin>>n>>m;
     for(long long int i=n;i>n-m;i--){
         sum=(sum % p) * (i % p) ;
     }

    cout<< sum  % p;
    return 0;
}

