#include<iostream>

using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void Print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {1, 2, 3, 4, 5};

    reverse(arr1, 6);
    reverse(arr2, 5);

    Print(arr1, 6);
    Print(arr2, 5);
}