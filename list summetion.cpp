#include <iostream>

using namespace std;

int for_loop(int n , int arr[]){
    int sum ;
    for( int i = 0 ;i<n ; i++){
        sum+=arr[i];
    }
    return sum;
}
int while_loop(int n , int arr[]){
    int sum , i = 0;
    while(i < n){
        sum+=arr[i];
        i++;
    }
    return sum ;
}
int recursive_sum(int n , int arr[]){
    if(n <= 0)
        return 0;
    return (arr[n-1]+recursive_sum(n-1,arr));
    }
int main()
{
    int siz;
    cin>>siz;
    int arr[siz];
    for(int i = 0 ; i< siz ; i++){
        cin>>arr[i];
    }
    cout<<for_loop(siz,arr)<<endl
        <<while_loop(siz,arr)<<endl
        <<recursive_sum(siz,arr);
}
