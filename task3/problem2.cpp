#include<iostream>
#include<string>

using namespace std;
struct student{
    string name;
    double grades;
};

int main(){
    int n;
    cin>>n;
    struct student stud[n];
    for(int i = 0 ; i < n ; i++){
        cin>>stud[i].name;
        cin>>stud[i].grades;
    }
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1 ; j++){
            if(stud[j].grades > stud[j+1].grades){
                struct student temp;
                temp = stud[j];
                stud[j] = stud[j+1];
                stud[j+1] = temp;
            }
        }

    }
    int smallest = 0;
    for(int i = 0 ; i < n ; i++){
        if(stud[i+1].grades > stud[i].grades){
            smallest = (i+1);
            break;
        }
    }
    string tmp;
    for(int i = smallest ; i < n ; i++){
        if(stud[i+1].grades == stud[i].grades){
            if(stud[i].name>stud[i+1].name){
                tmp = stud[i].name;
                stud[i].name = stud[i+1].name;
                stud[i+1].name = tmp;
            }
            cout<<stud[i].name<<endl;
        }
        else{
            cout<<stud[i].name;
            break;
        }
    }
}