#include<iostream>
using namespace std;
int main(){
    long long n,t,days = 0,cnt = 0;
    cin>>n>>t;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
        for(int i = 0;i<n && cnt<t ;i++){
            cnt+= 86400 - arr[i];
            days++;
    }
    cout<<days;
}