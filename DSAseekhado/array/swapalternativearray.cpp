#include<iostream>

using namespace std;

void swapalternative(int arr[], int n){
    for(int i = 0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    //the array should print 2 1 4 3 6 5

    swapalternative(arr, 6);

    print(arr, 6);

}