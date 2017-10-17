#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include<string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    map<int,int> m;

     for(int i=0;i<n;i++){
         int a;
         cin >> a;
         m[a]++;
     }

    for(map<int,int> :: iterator it=m.begin(); it!=m.end();it++){
       if(it->second == 2){
           cout<<it->first<<endl;
           break;
       }

    }
    return 0;
}
