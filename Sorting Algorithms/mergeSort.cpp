#include<iostream>
using namespace std;

void mergeLogic(int *arr,int l,int h,int mid){

    int i=l;
    int j=mid+1;
    int k=l;
    int B[100];

    while(i<=mid&&j<=h){
        if(arr[i]<=arr[j]){
            B[k++] = arr[i++];
            
        }
        else{
            B[k++] = arr[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++] = arr[i];
    }
    for(;j<=h;j++){
        B[k++] = arr[j];
    }

     for(int i=l;i<=h;i++){
        arr[i] = B[i];
    }

}

void mergeSort(int *arr,int l,int h){


if(l<h){

    int mid = (l+h)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);
    mergeLogic(arr,l,h,mid);
}


}




int main(){

    int arr[] = {9,212,434,35,3,546,4,4,6};
    int n = sizeof(arr)/sizeof(int);

    
    mergeSort(arr,0,n-1);


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}