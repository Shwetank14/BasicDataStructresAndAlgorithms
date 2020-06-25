#include<iostream>
using namespace std;


int main(){

    int arr[] = {2,-3,7,-5/*-7,9,3,5,-1,-3,5,-4,6*/,8,};
    int n = sizeof(arr)/sizeof(int);

    int globalMax = arr[0];
    int localMax = arr[0];

    for(int i=1;i<n;i++){
        localMax = max(arr[i],localMax+arr[i]);
        globalMax = max(globalMax,localMax);
    }

    cout<<globalMax;
    

}