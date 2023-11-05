#include<iostream>

using namespace std;

int main(){
    int nums = 5;
    int* p = &nums;
    cout<<*p+1<<endl;
}