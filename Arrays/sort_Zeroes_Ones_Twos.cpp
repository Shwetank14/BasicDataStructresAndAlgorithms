// Sort the array of 0's 1's and 2's as its element
// Without Using any soritng algorithm
// No extra space should be used

#include<iostream>
using namespace std;


int main(){

    int arr[] = {2,0,1,2,1,1,0,1,1,1,2,1,1,0,2,1,1,2,0,2,1};
    int n = sizeof(arr)/sizeof(int);

    int cnt0 = 0,cnt1 = 0,cnt2 = 0;         // taking three count variables to count 0's 1's and 2's respectively!
    int i;
    for(i=0;i<n;i++){
        switch(arr[i]){                     // applying switch case to do the counting
            case 0:                     
                cnt0++;break;
            case 1:
                cnt1++;break;
            default:
                cnt2++;break;
        }
    }
    i = 0;
    while(cnt0){                        // for each count for 0's 1's and 2's we add the elements in the array
        arr[i++] = 0;
        cnt0--; 
    }
    while(cnt1){
        arr[i++] = 1;
        cnt1--; 
    }
    while(cnt2){
        arr[i++] = 2;
        cnt2--; 
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}