// To find the min element in the contiguous subarray of size k in a given array
// Time Complexity -> O(n)
// Space Complexity -> O(1)

#include<iostream>

using namespace std;


int main(){

    int arr[] = {1, 4, 2,10,2,3,1,0,20};
    int n = sizeof(arr)/sizeof(int);

    int k = 3;              // Window Size

    // Idea - Sliding Window Algorithm
    // Method - Same as maxOfAllSubArrayofSizeK.cpp

    

    int i = 0;
    int j = k-1;
    int t = i;
    int idx;
    int min = arr[j];       // Setting min to  as last element of the window initially

    // Iterating till the last index of the of window is less than sizeofArrar

    while(j<n){

        if(arr[i] < min){
            min = arr[i];
            idx = i;                // Keeping an eye on the index of the min element
        }

        i++;

        if(i > j){
            cout<<min<<" ";        
            j++;                   
            i = ++t;

            if(idx < i){            // if min value is not in the window after shifting the window then update the min temporarily  
                min = arr[j];     
            }
        }
    }


}