#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n,count=0;;
    cin>>n;

    int x[n],y[n];

    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }

     cout<<(n-4)/2;

      return 0;
}

