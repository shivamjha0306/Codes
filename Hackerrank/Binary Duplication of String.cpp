#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    string s="0";
    int t=10;
    while(t--){

        string a;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                a.push_back('1');
            }
            else{
                a.push_back('0');
            }


        }
        s+=a;
    }

    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        cout<<s[m]<<endl;

    }



    return 0;
}

