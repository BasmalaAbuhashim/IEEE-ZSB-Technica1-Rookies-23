#include <cmath>
#include <iostream>
using namespace std;


int main() {
    
    int n , m , maxmm = 0;
    cin>>n>>m;
    int arr[m];
    for(int i = 0 ; i < m ; i++){
        cin>>arr[i];
    }
    int maximum = 0;
    for(int i = 0 ; i < n ; i++){
        int minimum = INT_MAX; 
        for(int j = 0 ; j < m ; j++){
            minimum= min(minimum,abs(i-arr[j]));
        }
        maximum = max(minimum,maximum);
    }
    cout<<maximum;
}