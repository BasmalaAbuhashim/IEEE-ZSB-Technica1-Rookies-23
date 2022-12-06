#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
bool pairing(char begin , char end){
    if(begin == '('&& end == ')')
        return true;
    else if(begin == '['&& end == ']')
        return true;
    else if(begin == '{'&& end == '}')
        return true;
    else 
        return false;
}
bool check_Brackets(string val){
    stack <char> stack;

    for(int i  = 0 ; i < val.size() ; i++){
        if(val[i] == '(' || val[i] == '{' || val[i] == '['){
            stack.push(val[i]);
        }
        else if(val[i] == ')' || val[i] == '}' || val[i] == ']'){ //smth should've been inserted before it
            if(stack.empty()) //so it souldn't be empty
              return false;
            if(pairing(stack.top(),val[i]) == false){
                return false;
            }
            else{
                stack.pop();
                return true;
            }
        }
    }
    if(stack.empty()){
        return true;
    }
    else{
        return false ;
         }
}
int main(){
    string bracket ;
    cin>>bracket;
    if(check_Brackets(bracket)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}