#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,total=0;
    cin>>num;
    int arr[num][num];
    for(int row=0;row<num;row++){
        for(int col=0;col<num;col++){
            cin>>arr[row][col]; //1,2,3,4
        }
    }
    int sum1=0;
    for(int i=0;i<num;i++){ //1..3
        for(int j=i;j<num;j++){
            sum1+=arr[i][j];
            break;
        }
    }
    int sum2=0;
    for(int i=0;i<num;i++){ //1..3
        for(int c=i+1,j=num-c;j>=0 && c<=num ;c++){
            //cout<<arr[i][j]<<endl;
            sum2+=arr[i][j];
            break;
        }
    }
    if(sum1>=sum2)
    total=sum1-sum2;
    else
    total=sum2-sum1;
    cout<<total;
}