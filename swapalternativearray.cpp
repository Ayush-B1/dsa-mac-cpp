#include<iostream>

using namespace std;


void Swapalternativearray(int arr[], int n){
    for(int i = 0; i<n; i = i+2){
        if(i+1 <n){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[5] = {1, 3, 2, 7, 11};

    Swapalternativearray(arr, 5);
    print(arr, 5);
}