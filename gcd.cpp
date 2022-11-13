#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,gcd;
    cin>>a;
    cin>>b;

    for(int i=1;i<=a&&b ;i++){
        if(a%i==0 && b%i==0){
           gcd=i;
        }
    }
    cout<<gcd<<endl;
}
