#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
using namespace std;
int main(){
    string val,asc,des;
	int diff = 0;
	cin>>val;
	sort(val.begin(),val.end());
	asc = stoi(val);
	reverse(val.begin(),val.end());
	des = stoi(val);
	cout<<des<<" "<<asc;

	//here i was checking foe the values of des and asc but they were'nt right the output was 4
	//which is not the expected output it should have been 2100 and 0012 
	//i was gonna get the max between des and asc the subtract the min from it
	//while putting all the previious algorithm in a while loop of condition while (diff != 6174)
	//where diff is the result of subtracting 
	//and i'll be setting a counter for this loop to determine how many times these
	//operations'll be repeated
}
