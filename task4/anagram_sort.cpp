
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void printAnagram(unordered_map<string,vector<string> >& store)
{
	for (auto it:store)
	{
		vector<string> temp_vec(it.second);
		int size = temp_vec.size();
	
		for (int i = 0; i < size; i++)
		cout << temp_vec[i] << " ";
		
		cout << "\n";
	}
}


void storeInMap(vector<string>& vec)
{
	unordered_map<string,vector<string> > store;

	for (int i = 0; i < vec.size(); i++)
	{
		string tempString(vec[i]);
	
		sort(tempString.begin(),tempString.end());
	
		store[tempString].push_back(vec[i]);
	}

	printAnagram(store);
}
 
int main()
{

    int num;
    cin>>num;
    string val;
	vector<string> arr;
	while(num--){
        cin>>val;
        arr.push_back(val);
    }


	storeInMap(arr);
	return 0;
}