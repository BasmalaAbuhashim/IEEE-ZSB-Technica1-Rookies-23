#include<iostream>
using namespace std;
struct bottels{
    int v;
    int c;
};
int main(){
    int num,flag=0;
    cin>>num;
    struct bottels b[num];
    for(int i = 0 ; i < num ; i++){
        cin>>b[i].v>>b[i].c;
    }
    long long vol = 0;
    for(int i = 0 ; i < num ; i++){
        vol += b[i].v;
    }
    for(int i = 0 ; i<num-1 ; i++){
        for(int x = 1 ; x < num ; x++){
            if((b[i].c + b[x].c) >= vol){
                flag = 1;
            }
        }
    }
    if(flag==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}