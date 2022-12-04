#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int var;
    vector<int> v;
    while(cin>>var){
        if(var == -1){
            break;
        }
        v.push_back(var);
    }
    vector<int> k;
    for(int i = 0 ; i < v.size() ; i++){
        int count = 0;
        for(int j = (i+1) ; j < v.size() ; j++){
        count++;
        if(v[i] == v[j]){
            k.push_back(count);
            break;
        }
    }
    }
    int x;
    x = *min_element(k.begin(),k.end());
    cout<<x;
}