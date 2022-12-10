#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t , sz;
    cin>>t>>sz;
    vector<string>v;
    string val;
    for(int i = 0; i < t ; i++){
        cin>>val;
        v.push_back(val);
    }
    int num = 0 ,cnt =0;
    for(int i = 0 ; i < t-1 ; i++){
        for(int j = i+1 ; j < t ; j++){
          int ans = 0;
          for(int x = 0 ; x < sz ; x++){ //0..1..2..3..4
            if(v[i][x] == '1' || v[j][x] == '1')//10101..//11110
            ans++; //1..2..3..4..5
          }
          if(num < ans){//num =0..ans =5
            num = ans;//num = 5
            cnt = 1;//cnt =1
          }
          else if(num == ans)
          cnt++;
        }
    }
    cout<<num<<endl
        <<cnt;
    //5//1
}