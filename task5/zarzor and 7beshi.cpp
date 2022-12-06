#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num , rem, sqr , sum ;
    cin>>num; //19..2
    while(num != 1 && num > 0){  //19..81..//2//4
        sum = 0; 
   
      rem = num%10; //9..1..2..8..2
      if(rem == 0)
         sqr = 1;
      else
      sqr = rem ^ 2; //81..1//..4..64.//.4
      sum += sqr; //81..82//4..68//4
      num /= 10;//1..0..8..0..//0
   
     num = sum; //81..68..4
 }
    if(num == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}