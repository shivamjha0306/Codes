#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n;

    string s;
    cin>>s;
    //long a=s.length();

    long sum=0;
    for(int i=0;i<s.length();i++)
    {
        sum*=26;
        int j=s[i]-'A'+1;
        sum+=j;
    }
    cout<<sum;
    return 0;
}

