#include<iostream>
#include<vector>

//size ka mtlb kitne element pade hai
//capacity mtlb kitne element ke liye assign hai


using namespace std;

int main(){
    vector<int> a;
    vector<int> v(5, 1);

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"capacity = "<<a.capacity()<<endl;

    a.push_back(1);
    cout<<"capacity = "<<a.capacity()<<endl;

    a.push_back(2);
    cout<<"capacity = "<<a.capacity()<<endl;

    a.push_back(3);
    cout<<"capacity = "<<a.capacity()<<endl;

    a.push_back(4);
    cout<<"capacity = "<<a.capacity()<<endl;
    cout<<"size = "<<a.size()<<endl;

    cout<<"The Element at 2nd index is: "<<a.at(2)<<endl;
    cout<<"The Element at front is: "<<a.front()<<endl;
    cout<<"The element at last is: "<<a.back()<<endl;

    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    a.pop_back();
    cout<<"The element at last is: "<<a.back()<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"The Size of vector before clearing it: "<<a.size()<<endl;
    a.clear();
    cout<<"The Size of vector after clearing it: "<<a.size()<<endl;
}