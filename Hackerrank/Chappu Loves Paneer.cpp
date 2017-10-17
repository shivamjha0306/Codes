#include <cmath>
#include<bits/stdc++.h>
#include <cstdio>
#include <vector>
#include<limits>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  long int i,n,qnt,price,min,sum=0;
    cin>>n;
   min=INT_MAX;
   while(n--){
       long int p,q;

   cin>>p>>q;
       if(q<min){
           min=q;
       }


       sum+=p*min;

    }
    cout<<sum<<endl;

    return 0;
}

