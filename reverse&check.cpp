#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int x,x1;
   cin>>x;
   x1=x;
   int r=0;
   while(x1 !=0)
   {
       r=r*10+x1%10;
       x1=x1/10;
   }
   if(x==r)
    cout<<r<<"\n"<<"YES"<<endl;
   else
    cout<<r<<"\n"<<"NO"<<endl;
   return 0;

}
