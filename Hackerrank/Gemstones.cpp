#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;
    cin>>t;
    map<char,int> m;
    for(int i=0;i<t;i++)
    {

        string s;
        cin>>s;


        for(int j=0;j<s.length();j++){
         if(m[s[j]]==i)  {
             m[s[j]]++;
         }
        }
    }
    int count=0;
    for(map<char,int > :: iterator it=m.begin(); it!=m.end();it++ ){
        if(it-> second ==t){
            count++;
        }
    }
    cout<<count;

    return 0;
}

