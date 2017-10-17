#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int w;
    cin>>w;
    if(w==0 || w==2)
    {
        cout<<"NO";
     goto s;
    }
    if(w%2==0)
    {
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }
    s:

    return 0;
}

