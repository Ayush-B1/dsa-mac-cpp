#include<iostream>

using namespace std;

void selection(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minimum = i;
        for(int j = i+1; j<n; j++){
            if(arr[minimum] > arr[j])
                minimum = j;
        }
        swap(arr[minimum], arr[i]);
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[5] = {35, 4, 11, 25, 10};

    selection(arr, 5);
    print(arr, 5);
}