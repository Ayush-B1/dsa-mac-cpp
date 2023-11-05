#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int, 5> a = {1, 2, 3, 4, 5};

    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }cout<<endl;

    cout<<"The Element at 2nd index is: "<<a.at(2)<<endl;
    cout<<"The first element is: "<<a.front()<<endl;
    cout<<"The last element is: "<<a.back()<<endl;
}