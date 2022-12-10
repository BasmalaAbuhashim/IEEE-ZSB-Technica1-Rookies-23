#include<iostream>
using namespace std;
int main(){
    int n,d,cnt=0;
    cin>>n>>d;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    for(int i = 0; i<(n-2);i++){
        for(int j = i+1; j<(n-1);j++){
            if(arr[j]-arr[i] == d)
            for(int k = i+2 ; k<n;k++){
                if(arr[k]-arr[j] == d){
                    ++cnt;
                    break;
                }
            }
         }
    }
    cout<<cnt;
}