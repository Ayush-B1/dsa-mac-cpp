#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int, string> s;
    s[1] = "Ayush";
    s[2] = "Bhattarai";
    s[10] = "JDM skyline gtr";

    s.insert({6, "mk4 supra"});
    for(auto i:s){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
}