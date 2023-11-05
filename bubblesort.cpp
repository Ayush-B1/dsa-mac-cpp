#include<iostream>

using namespace std;

void bubblesort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        bool swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[5] = {35, 4, 11, 25, 10};

    bubblesort(arr, 5);
    print(arr, 5);
}