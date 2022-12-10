#include<iostream>
#include<string.h>

using namespace std;

void counter() {
    int num , digit, cnt = 0 ;
    cin>>num;
    int temp = num;
    while(temp > 0){
        digit = temp % 10;
        if(digit != 0 && num % digit == 0){
            cnt++;
        }
        temp/=10;
    }
    cout<<cnt<<endl;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        counter();
    }
}