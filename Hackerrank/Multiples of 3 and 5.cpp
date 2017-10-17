#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long long t,p,q,r;
    long n,sum,n1,n2,n3,s1,s2,s3,s15;
    cin>>t;
   for(long i=0;i<t;i++)
   {
       cin>>n;
      long m3,m5,m15;
      n1=(n-1)/3;
          n2=(n-1)/5;
          n3=(n-1)/15;
       s1=(n1*(6+(n1-1)*3))/2;
       s2=(n2*(10+(n2-1)*5)/2);
       s3=(n3*(30+(n3-1)*15)/2);
       sum=s1+s2-s3;
       cout<<sum<<"\n";
   }

    return 0;
}

