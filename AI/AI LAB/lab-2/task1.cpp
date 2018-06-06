#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;

string reflexVacumAgent(string location, string status){
    if(status.compare("Dirty")==0){
        return "Suck the dirt";
    }
    else if(location.compare("A")==0){
        return "go Right way";
    }
    else if(location.compare("B")==0){
        return "go Left way";
    }

}
int main(){
    cout<<reflexVacumAgent("A","Dirty")<<endl;
    cout<<reflexVacumAgent("A","Clean")<<endl;
}
