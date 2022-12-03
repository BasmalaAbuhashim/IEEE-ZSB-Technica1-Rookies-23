#include<iostream>

using namespace std;

int minimum(int front , int last){
    if( front > last){
        return last;
    }
    else{
        return front;
    }
}
int minTurn(int n, int k)
{
    int front , last;
	if (n % 2 == 0){
        front = k/2 ;
        last = n - k - 1/2;
        return minimum(front,last);
    }
    else{
        front = (k-1)/2;
        last = (n - k)/2;
        return minimum(front,last);
    }
}

int main()
{
	int num , p;
    cin>>num>>p;
	cout << minTurn(num,p) << endl;
	return 0;
}