#include<iostream>

using namespace std;

bool search(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}

int main(){
    //linearsearch without any tutorial

    int arr[5] = {24, -2, 27, 13, 90};

    int key;
    cout<<"Enter the key you want to search in your array: ";
    cin>>key;

    bool find = search(arr, 5, key);

    if(find){
        cout<<"The Element is present in your array"<<endl;
    }else{
        cout<<"The Element is not present in your array"<<endl;
    }
}