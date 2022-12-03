#include <iostream>
using namespace std;

int main(){
    string val;
    int flag=0;
    long long length;
    cin>>val;
    length = val.size();
    for(int i = 0 ; i<length ; i++){
        if(val[i] != val[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
}