#include<iostream>
using namespace std;

void callSelection(int arr[], int n){

    for(int i=0;i<n-1;i++){
        int k = i;
        for(int j=i+1;j<n;j++){
            //int k = i;
            if(arr[j]<arr[k]){
                k = j;
            }
        }
        swap(arr[i],arr[k]);
    }

}


int main(){

    int arr[] = {20,32,34,23,4,2,352,552,4,37,513,13,3};
    int n = sizeof(arr)/sizeof(int);


    callSelection(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}