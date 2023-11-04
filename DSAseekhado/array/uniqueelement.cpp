#include<iostream>

using namespace std;

int unique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans =  ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1, 2, 1, 3, 2};

    int uniquenumber = unique(arr, 5);

    cout<<"The unique Number is: "<<uniquenumber<<endl;
}