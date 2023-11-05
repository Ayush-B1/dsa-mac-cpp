#include<iostream>

using namespace std;

int find(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[9] = {1, 1, 2, 2, 4, 4, 6, 7, 6};

    cout<<find(arr, 9)<<endl;
}