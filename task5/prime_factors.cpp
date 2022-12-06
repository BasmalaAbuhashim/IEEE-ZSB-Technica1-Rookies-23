#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i = 2 ; i < sqrt(num) ; i++){
        while(num % i == 0){
            num/=i;
            cout<<i<<" ";
        }
    }
    if(num != 1){
        cout<<num;
    }
}