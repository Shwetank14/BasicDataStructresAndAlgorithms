#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n = sizeof(arr)/sizeof(int);

    int k = 4;

    int maxSum = 0;
    for(int i=0;i<k;i++){           //Initializing first window sum
        maxSum += arr[i];
    }
    int WinSum = maxSum;
    for(int i = k;i<n;i++){
        WinSum += arr[i] - arr[i-k];
        maxSum = max(maxSum,WinSum); 
    }

    cout<<"For window of size "<<k<<" the max subarray sum is -> "<<maxSum;

}