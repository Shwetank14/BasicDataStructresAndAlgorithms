//Merging Two sorted arrays in sorted order without using Extra Space ie Space complexity -> O(1)

//Example below: 
/*

Input: arr1[] = {1, 5, 9, 10, 15, 20};
       arr2[] = {2, 3, 8, 13};

Output: arr1[] = {1, 2, 3, 5, 8, 9}
        arr2[] = {10, 13, 15, 20} 

*/

// Note: This solution has the time Complexity -> O(n^2)

#include<iostream>
using namespace std;


//The ituition behind solving this problem is using the concept of Insertion Sort

int main(){

    int arr1[] = {1,5,8,9};int n = sizeof(arr1)/sizeof(int);
    int arr2[] = {4,7,10};int m = sizeof(arr2)/sizeof(int);

    for(int i=m-1;i>=0;i--){
        int last = arr1[n-1];
        int j;

       for(j = n-2;j>-1 && arr1[j] > arr2[i] ;j--){
                arr1[j+1] = arr1[j];
       }

        if(last > arr2[i]){
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";
    }

}