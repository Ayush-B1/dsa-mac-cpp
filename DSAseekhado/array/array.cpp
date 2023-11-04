#include<iostream>

using namespace std;

bool search(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
}

int main(){
    int arr[5] = {24, 27, 7, -2, 90};

    int key;
    cout<<"Enter the Number you want to search in your array: ";
    cin>>key;

    bool find = search(arr, 5, key);
    if(find){
        cout<<"The element is present in your array"<<endl;
    }else{
        cout<<"The element is not present in you array"<<endl;
    }
}



