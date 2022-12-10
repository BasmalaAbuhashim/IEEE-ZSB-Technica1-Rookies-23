#include <vector>
#include <iostream>
using namespace std;

void chrestie(){
    int n,k,popularity;
    cin>>n>>k;
    vector<int>v;
    for(int i = 0;i<n;i++){
        cin>>popularity;
        while(!(v.empty()) && v.back() < popularity&&k>0){
            v.pop_back();
            k--;
        }
        v.push_back(popularity);
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    chrestie();
}