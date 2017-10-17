#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int t;
    cin>>t;
    while(t--){
    long long int n;
    cin>>n;
        int flag=0;
        if(n==0 ){
            flag=0;
            goto x;
        }
        while(n!=1){
            if(n%2 !=0){
                flag=0;
                break;
            }
            else{
                flag=1;
            n/=2;
            }
        }
        x:
      cout<<flag<<endl;

    }
    return 0;
}

