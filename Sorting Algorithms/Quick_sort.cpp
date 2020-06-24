#include<iostream>
using namespace std;

int Quick_partition(int *arr,int start,int end){

    int pivot = arr[end];
    int ptrIndex = start; 

    for(int i=start;i<end;i++){
        if(arr[i] <= pivot){
            swap(arr[i],arr[ptrIndex]);
            ptrIndex++;
        }
    }
    swap(arr[end],arr[ptrIndex]);
    return ptrIndex;
}


void quickSort(int *arr,int l,int h){

if(l<h){
    int M = Quick_partition(arr,l,h);
    quickSort(arr,l,M-1);
    quickSort(arr,M+1,h);
    }
}


int main(){

    int arr[] = {123,14,134,31,42,5,325,25,253,5,24,5};
    int n = sizeof(arr)/sizeof(int);

    int low = 0;
    int high = n-1;

    quickSort(arr,low,high);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}