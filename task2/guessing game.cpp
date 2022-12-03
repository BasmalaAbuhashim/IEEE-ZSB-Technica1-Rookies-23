#include <iostream>
#include<random>
using namespace std;
bool find_val(int randm,int x){
    for(int i = 1 ; i<=3 ; i++){ //321..32..3
        if(randm%10==x) //1!=3..2!=3..3=3
           return true;
        else
           randm/=10; //32..3
    }
    return false;
}
bool position(int randm,int x,int i){
    int b = pow(10,i);//10^1 
    int digit = (randm/b) % 10;//(32)%10=2
    if(digit == x)
    return true;
    else
    return false;
}
int main()
{
    int random=rand()%1000; //the size is 3 nums
    cout<<"the random= "<<random<<endl;//383
    cout<<"enter a value of three digits: "<<endl;
    int value;
    cin>>value;//321
    while(value!=random){
        int hit=0,miss=0;
        for(int i = 0 ; i<3 ; i++){
            int part =  value%10; //3//last num
            if(find_val(random,part)==true && position(random,part,i)==true)
            hit++;
            if(find_val(random,part)==true && position(random,part,i)==false)
            miss++;
            value/=10;
        }
        cout<<hit<<" hit "<<miss<<" miss "<<endl;
        cin>>value;
    }

    return 0;
}