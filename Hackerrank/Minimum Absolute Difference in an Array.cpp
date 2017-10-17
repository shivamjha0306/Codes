#include <bits/stdc++.h>


using namespace std;



int main() {
    long long int n,i,p,x=0,temp,mi=0;
    cin >> n;
    long long int a[n];
    for(i = 0; i < n;i++){
       cin >> a[i];

    }

    sort(a,a+n);

mi=INT_MAX;

  for(i=0;i<n;i++)
  {
      x=fabs(a[i]-a[i+1]);
      if(x<mi)
      {
          mi=x;
      }
  }
    p=fabs(a[0]-a[n]);

   if(p<mi)
   {
       mi=p;
   }
    cout << mi << endl;
    return 0;
}

