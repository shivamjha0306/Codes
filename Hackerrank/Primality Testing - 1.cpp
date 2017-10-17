#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void prime(long long int n){
    int f=1;
        if(n==0 || n==1){
            f=0;
        }
    if(n==2 || n==3){
        f=1;
    }

    else if(n%2==0){
        f=0;
    }
    else {
        for(int i=3;i<pow(n,0.5)+1;i+=2){
            if(n%i==0){
                f=0;
            }
        }
    }

    if(f==0){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t,f=1;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        prime(n);

    }


    return 0;
}

