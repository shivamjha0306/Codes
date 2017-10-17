#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--){
        stack<int > a;
        long int n,id,x;
        cin>>n>>x;
        a.push(x);
        char p;
        while(n--){
            cin>>p;

              if(p=='P'){
                  cin>>id;
                  a.push(id);

              }
            else {
                  int t,t1;
                t=a.top();
                a.pop();
                t1=a.top();
                a.pop();
                a.push(t);
                a.push(t1);

            }

        }
        cout<<"Player "<<a.top()<<"\n";



    }
    return 0;
}

