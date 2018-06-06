#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string loc,sta;
string Simplereflex_VacumAgent(string location, string status){
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
void interpretInput(){
    cin>>loc;
    cin>>sta;
    cout<<Simplereflex_VacumAgent(loc,sta)<<endl;
}
int main(){
    interpretInput();
}
