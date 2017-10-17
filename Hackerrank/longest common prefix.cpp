#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<char,int> m;
    int n;
    cin>>n;
     string  s1,p;
        cin>>s1;
    for(int i=1;i<n;i++){
        string s,temp;
        cin>>temp;

        for(int i=0;i<temp.length();i++){
            if(temp[i]==s1[i]){
                s+=s1[i];
            }
            else
                break;
        }
      //  cout<<s<<endl;
      s1=s;

    }

    cout<<s1<<endl;

    return 0;
}

