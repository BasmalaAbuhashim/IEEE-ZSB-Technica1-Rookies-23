#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    long x,y;
    cin>>x>>y;
    long long int a,b,c,d,e,f,j,i=0;
    j=0;
    long arr[1000];
    for(i=x;i<=y;i++)
    {
        a=0;
        d=e=0;
        b=i;
        while(b!=0)
        {
            b=b/10;
            a++;
        }
        c=pow(10,a);
        d=i*i;
        e=d/c;
        f=d%c;
        if(i==(e+f))
        {
            arr[j]=i;
            j++;
        }
        
    }
    if(j==0)
    cout<<"INVALID RANGE";
    else
    for(int i=0;i<j;i++)
    cout<<arr[i]<<" ";
    
}