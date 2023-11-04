#include<iostream>

using namespace std;

int reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    //reversing an array is kind of easy

    reverse(arr, 6);
    print(arr, 6);

}