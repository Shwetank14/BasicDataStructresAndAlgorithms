#include<iostream>
using namespace std;

void bubble(int arr[], int n){
    int flag;
    for(int i=0;i<n-1;i++){          // first loop for number of passes
        flag = 0;                   //Making bubble sort adaptive
        for(int j = 0;j<n-1-i;j++){        // 2nd loop for comparision in each pass and pushing the heaviest element at the back of the list
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
                return;
        }
    }
}


int main(){

    int arr[] = {1,2,45,2,7,5,56,64,4,3};
    int n = sizeof(arr)/sizeof(int);


    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}