#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin>>t;
    while(t--){
        map<char,int> m;
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }


        long long int sum=0;
        for(map<char,int> :: iterator it=m.begin();it!=m.end();it++){
            sum+=pow(it->second,2);

        }
        cout<<sum<<endl;
    }

    return 0;
}

