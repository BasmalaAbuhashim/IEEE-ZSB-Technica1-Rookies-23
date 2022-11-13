#include <iostream>

using namespace std;

int factorial(int n){
    int res = 1 , i;
    for(int i = 2 ; i<=n ; i++)
        res*=i;
    return res;
}
int main()
{
    int num;
    cin>>num;
    cout<<factorial(num);
}
