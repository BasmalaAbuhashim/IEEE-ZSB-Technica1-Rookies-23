
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    for(int i= 0;i<str.size();)
    {
        if(str[i] == '.'){
            cout<<"0";
            i++;
        }
         else if(str[i+1] == '.'){
             cout<<"1";
             i+=2;
         }
         else{
             cout<<"2";
             i+=2;
         }
         
     }
    return 0;
}