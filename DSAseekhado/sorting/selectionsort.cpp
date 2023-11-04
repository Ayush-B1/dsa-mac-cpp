#include<iostream>

using namespace std;

void selectionsort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minimum = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        swap(arr[minimum], arr[i]);
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[5] = {35, 11, 4, 25, 10};
    selectionsort(arr, 5);
    print(arr, 5);
}