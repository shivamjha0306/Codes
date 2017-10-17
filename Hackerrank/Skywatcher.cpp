#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float t,c,n,x,y;
    cin>>n;
    t=n;
    float m;
    c=0;
    while(n--){
        cin>>x>>y;

        if(x>0 && y>0){
            c++;
        }
    }
    m=c/t;
    cout<<setprecision(6)<<fixed<<m<<endl;
    return 0;
}

