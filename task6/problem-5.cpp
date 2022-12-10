#include <iostream>

using namespace std;
void check(){
    string value;
    cin>>value;
    string theValue="hackerrank";
    int i=0;
    int z=0;
    while(true){
        if(i==value.size()||z==theValue.size()){
            break;
        }
        if(value[i]==theValue[z]){
            z++;
        }
        i++;
    }
    if(z==10){
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{
    int num;
    cin>>num;
    while(num--){
        check();
    }
}
