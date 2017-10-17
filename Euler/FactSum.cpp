#include <bits/stdc++.h>
using namespace std;


void multiply(vector<int> &v, int x)
{
    int carry = 0, res;
    int size = v.size();
    for (int i = 0 ; i < size ; i++)
    {

        int res = carry + v[i] * x;


        v[i] = res % 10;
        carry = res / 10;
    }
    while (carry != 0)
    {
        v.push_back(carry % 10);
        carry /= 10;
    }
}


int Sum(int n)
{
    vector<int> v;
    v.push_back(1);
    for (int i=1; i<=n; i++)
        multiply(v, i);


    int sum = 0;

    for (int i = 0 ; i < v.size() ; i++)
        sum += v[i];
    return sum;
}


int main()
{

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        cout<<Sum(n)<<endl;
    }
    return 0;
}
