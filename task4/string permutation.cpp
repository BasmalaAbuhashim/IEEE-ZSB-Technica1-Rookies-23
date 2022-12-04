#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1 , s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    int found = s2.find(s1);
    if(found != string::npos){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}