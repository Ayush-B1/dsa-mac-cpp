#include<iostream>

using namespace std;

bool search(int arr[], int size, int key){
    for(int i = 0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the number of elements you want in your array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter The Value: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"Your array is: ";

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the element you want to search in this array: ";
    int key;
    cin>>key;
    cout<<endl;
    bool found = search(arr, n, key);
    if( found ){
        cout<<"The Key is present"<<endl;
    }else{
        cout<<"The key is not present"<<endl;
    }
}
