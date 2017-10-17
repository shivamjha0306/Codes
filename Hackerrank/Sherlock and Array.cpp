#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
        {
        bool flag = false;
        int sum = 0;
        int left = 0;
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
            {
            cin>>a[i];
            sum += a[i];
        }

        for(int i=0;i<n;i++)
            {
            sum = sum - a[i];
            if(left==sum)
                {
                flag = true;
                break;
            }
            left = left + a[i];
        }

        if(flag)
                cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

