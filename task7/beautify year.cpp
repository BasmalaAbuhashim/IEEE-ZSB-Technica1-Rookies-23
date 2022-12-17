#include <bits/stdc++.h>

using namespace std;

int main()
{
   int num;
   cin>>num;
   while(true){
       num++;
       string str = to_string(num);
       if(str[0] != str[1] && str[0] != str[2] && str[0]!= str[3] && str[1] != str[2] &&  str[1] != str[3] && str[2] != str[3])
       break;
       
   }
   cout<<num;
}
