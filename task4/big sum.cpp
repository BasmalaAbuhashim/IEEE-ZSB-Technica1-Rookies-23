#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i = 0 ; i< num ; i++){
        cin>>arr[i]; //9 9
    }
    int carry = (arr[num - 1] + 1) / 10;
    arr[num - 1] = (arr[num - 1] + 1) % 10; //9 9+1 = 10%10 = 0
    if(carry > 0){
                   //1
       for(int x = (num - 1) ; x > 0; x--){
              //0//9       9    +  1  % 10 = 0
            carry = (arr[x-1] + carry) / 10;
            arr[x-1] = ((arr[x-1] + carry)%10);
           
        }
    }
    if(carry > 0)
        cout<<carry<<" ";
    for(int i = 0 ; i< num ; i++){

        cout<<arr[i]<<" ";
    }
}