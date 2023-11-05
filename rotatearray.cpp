#include<iostream>

using namespace std;

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {0};
    int n = 5;
    int k = 3;

    for(int i = 0; i<n; i++){
        arr2[(i+k)%n] = arr1[i];
    }

    print(arr2, 5);

}