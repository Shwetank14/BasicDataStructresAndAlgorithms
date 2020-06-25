// To find the max element in the contiguous subarray of size k in a given array
// Time Complexity -> O(n)
// Space Complexity -> O(1)

#include<iostream>

using namespace std;


int main(){

    int arr[] = {1, 4, 2,10,2,3,1,0,20};
    int n = sizeof(arr)/sizeof(int);

    int k = 3;              // Window Size

    // Idea - Sliding Window Algorithm
    // Taking two pointers one(i) will point at starting index of the video and other(j) will point at the last index of the window
    // set the temp_index(t) = 0 (or i initially as i is also 0)
    // for each iteration of i we update the max value till i becomes greater than j and then we will print max
    // then we will move the window further by incrementing j and temp_index - and then set i again to temp

    

    int i = 0;
    int j = k-1;
    int t = i;
    int idx;
    int max = arr[j];       // Setting max to  as last element of the window initially

    // Iterating till the last index of the of window is less than sizeofArrar

    while(j<n){

        if(arr[i] > max){
            max = arr[i];
            idx = i;                // Keeping an eye on the index of the max element
        }

        i++;

        if(i > j){
            cout<<max<<" ";        // 
            j++;                   
            i = ++t;

            if(idx < i){            // if max value is not in the window after shifting the window then update the max temporarily  
                max = arr[j];     
            }
        }
    }


}