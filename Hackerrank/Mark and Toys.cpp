#include <bits/stdc++.h>

using namespace std;

int maximumToys(vector <long int> prices,long  int k,long int n) {
    // Complete this function
    long int i,m=0;
    sort(prices.begin(),prices.end());
    for(i=0;i<n;i++){
        if(k-prices[i]>0){
        k-=prices[i];
        m++;
        }

        else
        {
            break;
        }
    }
     return m;

}

int main() {
    long int n;
    long int k;
    cin >> n >> k;
    vector<long int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int result = maximumToys(prices, k,n);
    cout << result << endl;
    return 0;
}
