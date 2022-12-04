#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

// Comparison function to sort the 'freq_arr[]'
bool compare(pair<int, int> p1, pair<int, int> p2)
{
	// If frequencies of two elements are same
	// then the larger number should come first
	if (p1.second == p2.second)
		return p1.first > p2.first;

	// Sort on the basis of decreasing order
	// of frequencies
	return p1.second > p2.second;
}

// Function to print the k numbers with most occurrences
void print_N_mostFrequentNumber(int arr[], int N, int K)
{
	// unordered_map 'mp' implemented as frequency hash
	// table
	unordered_map<int, int> mp;
	for (int i = 0; i < N; i++)
		mp[arr[i]]++;

	// store the elements of 'mp' in the vector 'freq_arr'
	vector<pair<int, int> > freq_arr(mp.begin(), mp.end());

	// Sort the vector 'freq_arr' on the basis of the
	// 'compare' function
	sort(freq_arr.begin(), freq_arr.end(), compare);

	// display the top k numbers
	for (int i = 0; i < K; i++)
		cout << freq_arr[i].first << " ";
}

// Driver's code
int main()
{
	int N , K;
    cin>>N>>K;
    int arr[N];
    for(int i = 0 ; i < N ; i++){
        cin>>arr[i];
    }
	print_N_mostFrequentNumber(arr, N, K);

	return 0;
}

