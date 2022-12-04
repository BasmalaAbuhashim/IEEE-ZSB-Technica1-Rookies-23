#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main(){
    string val;
	int asc,des,count = 0;
	cin>>val;
	string diff = val;
	while(diff != "6174"){
	int x = 0 ;
	count++;
	sort(diff.begin(),diff.end());
	asc = stoi(diff);
	reverse(diff.begin(),diff.end());
	des = stoi(diff);
	if(des<1000){
		des*=10;
	}
	if(des<100){
		des*=100;
	}
	if(des<10){
		des*=1000;
	}
	x = des - asc ; 
	diff = to_string(x);
	}
	cout<<count;

}
