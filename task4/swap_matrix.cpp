#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num][num];
    for(int row=0;row<num;row++){
        for(int col=0;col<num;col++){
            cin>>arr[row][col]; //1,2,3,4
        }
    }
    for(int i = 0 ; i < num ; i++){ //traverse
        for(int j = i ; j < num ; j++){
            if(i != j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    int col = num/2;
    for(int i = 0 ; i < num ; i++){ //swap
        for(int j = 0 ; j < col ; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][num - j - 1];
            arr[i][num - j - 1] = temp;
        }
    }
    for(int row=0;row<num;row++){
        for(int col=0;col<num;col++){
            cout<<arr[row][col]<<" "; //1,2,3,4
        }
        cout<<endl;
    }
}