#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    long long int x,y,s=0,x1,y1;
      cin>>x>>y;
    while(cin>>x1>>y1){
        s+=max(abs(x-x1),abs(y-y1));
        x=x1;
        y=y1;
    }
    cout<<s<<"\n";
    return 0;
}

