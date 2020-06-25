// Implementation of famous Kadane's Algorithm
// Exact question : Find the contiguous subarray with maximum sum
#include<iostream>
using namespace std;


int main(){

    int arr[] = {2,-3,7,-5,-7,9,3,5,-1,-3,5,-4,6,8,};
    int n = sizeof(arr)/sizeof(int);

    int globalMax = arr[0];             // taking global maximum
    int localMax = arr[0];              // taking local maximum

    for(int i=1;i<n;i++){
        localMax = max(arr[i],localMax+arr[i]);
        globalMax = max(globalMax,localMax);
    }

    cout<<globalMax;
    

}
