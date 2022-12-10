#include<iostream>
using namespace std;
int main(){
    int a , k , q;
    cin>>a>>k>>q;
    int arr[a];
    for(int i = 0 ; i < a ; i++){
        cin>>arr[i];
    }
    int index;
    reverse(arr,arr+a);
    reverse(arr,arr+k);
    reverse(arr+k,arr+a);
    for(int i = 0 ; i < q ; i++){
        cin>>index;
        for(int j = 0; j<a;j++){
            if(index == j){
                cout<<arr[j]<<endl;
                break;
            }
        }
    }
}