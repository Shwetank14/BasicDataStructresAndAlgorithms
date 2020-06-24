// find Duplicate elements in an array

#include<iostream>
#include<map>

using namespace std;

int main(){


    int arr[] = {2,3,4,3,1,4,8,2,5,6,7,4,8,11};
    int n = sizeof(arr)/sizeof(int);
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;        //mapping the element of array with their count 
    }

    //finding the duplicate from the map
    //Count of the numbers will be stored in the second of the map!
    //If the count is greater than 1 then the element has duplicate elements present in the array

    for(auto it = m.begin();it!=m.end();it++){
        if(it->second > 1){
            cout<<it->first<<" ";       
        }
    }


}
