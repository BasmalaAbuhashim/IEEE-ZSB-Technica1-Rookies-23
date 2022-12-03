#include <iostream>

using namespace std;
int main()
{
    string value;
    cin>>value;
    string theValue="hello";
    int i=0;
    int z=0;
    while(true){
        if(i==value.size()||z==theValue.size()){ //in the case of i = val.size this means failor
            break;                               //in case of z = theValue.size this mean success
        }
        if(value[i]==theValue[z]){
            z++;
        }
        i++;
    }
    if(z==5){
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
