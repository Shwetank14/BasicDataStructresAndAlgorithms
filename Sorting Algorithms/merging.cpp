#include<iostream>
using namespace std;

void mergeProcedure(int arr[],int l,int h){

    int mid = h/2;
    
    int B[100];
    int i = l;
    int j = mid;
    int k = l;

    while(i<mid && j<h){

        if(arr[i]<=arr[j]){
            B[k] = arr[i];
            k++;
            i++;
        }
        else{
            B[k] = arr[j];
            k++;
            j++;
        }
    }

    for(;i<mid;i++){
        B[k++] = arr[i];
    }
    for(;j<h;j++){
        B[k++] = arr[j];
    }

     for(int i=0;i<h;i++){
        arr[i] = B[i];
    }
 
    
}




int main(){

    int arr[] = {12, 23, 43, 45,7, 8, 9, 100};
    
    int h = sizeof(arr)/sizeof(int);

    int l = 0;
    mergeProcedure(arr,l,h);


    for(int i=0;i<h;i++){
        cout<<arr[i]<<" ";
    }
 
}