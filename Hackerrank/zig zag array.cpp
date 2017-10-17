#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n;
        cin >> n;
    long int a[n];

    for(int i=0; i<n; i++ ){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n;i++){

        long int temp;

        if(i%2==1){


            if(a[i] > a[i+1]){
                  temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }
        }

        if(i%2==0){
            if(a[i] < a[i+1] ){

                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

            }

        }


    }

   for(int i=0; i<n; i++ ){
        cout<<a[i]<<" ";
    }

    return 0;
}

