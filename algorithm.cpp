#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);

    cout<<binary_search(a.begin(), a.end(), 4)<<endl;
}