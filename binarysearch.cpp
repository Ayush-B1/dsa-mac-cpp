#include<iostream>

using namespace std;

int searching(int arr[], int size, int key){
    int starting_point = 0;
    int endling_point = size;

    while(starting_point<=endling_point){
        int mid_element;
        mid_element = (starting_point + endling_point)/2;
        if(arr[mid_element] == key){
            return mid_element;
        } else if(arr[mid_element]>key){
            endling_point = mid_element-1;
        }else{
            starting_point = mid_element + 1;
        }

    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of element you want in your array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the values: "<<endl;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }cout<<endl;

    cout<<"Your Array is: ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int key;
    cout<<"Enter the Element which you want to check that is it present in that array or not: ";
    cin>>key;
    cout<<endl;

    int binarysearch = searching(arr, n, key);
    cout<<"The indexing of that Element is: ";
    cout<<binarysearch<<endl;
    
}
