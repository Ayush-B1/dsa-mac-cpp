#include<iostream>

using namespace std;

int duplicate(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }for(int i = 1; i<n; i++){
        ans = ans^i;

        if(ans == 0){
        return arr[i] - 1;
    }
    }
}

int main(){
    int arr[5] = {1, 2, 3, 3, 4};


    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int dup = duplicate(arr, 5);

    cout<<"The Duplicate Element is: "<<dup<<endl;

    return 0;
}