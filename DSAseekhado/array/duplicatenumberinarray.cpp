#include<iostream>

using namespace std;

int duplicate(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    for(int i = 1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}

int main(){
    int arr[5] = {1, 2, 3, 3, 4};

    int duplicatenum = duplicate(arr, 5);

    cout<<"The Duplicate number is: "<<duplicatenum<<endl;
}