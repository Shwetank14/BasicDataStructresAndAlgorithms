#include<iostream>
#include<map>

using namespace std;

void CountSort(int *arr,int n){

    map<int,int> m;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    auto kt=m.begin();
    int j = 0;
    while(kt!=m.end()){
        if(kt->second > 0){
            arr[j++] = kt->first;
            kt->second--;
        }
        else{
            kt++;
        }
    }

}



int main(){

    int arr[] = {1,2,3,35,54,46,6,7,5,7,4,6,9};

    int n = sizeof(arr)/sizeof(int);

    CountSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}