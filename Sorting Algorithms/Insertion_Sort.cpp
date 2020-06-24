#include<iostream>
using namespace std;



void callInsert(int arr[],int n){

    for(int i=1;i<n;i++){
        int j = i-1;
        int x = arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }

}

int main(){

    int arr[] = {2,3,2243,259,254,426,624,13,31,6,46,346};
    int n = sizeof(arr)/sizeof(int);


    callInsert(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}