#include<iostream>

using namespace std;

void bubblesort(int arr[], int n){
    for(int i = 1; i<n; i++){
        //for round 1 to n-1;
        bool swapped = true;
        for(int j = 0; j<n-i; j++){
            //process elements till n-i index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped == true;
            }
        }
        if(swapped == false){
            //already sorted
            break;
        }
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[6] = {10, 1, 7, 6, 14, 9};

    bubblesort(arr, 6);
    print(arr, 6);

}