#include<iostream>
using namespace std;

void heapify(int *heap ,int n,int i){

    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;

    //if Left child is smaller
    if(l<n && heap[l]>heap[largest]){
        largest = l;
    }

    if(r<n && heap[r]>heap[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(heap[i],heap[largest]);

        heapify(heap,n,largest);
    }
}




void heapSort(int *heap, int n){

    for(int i= n/2-1;i>=0;i--){
        heapify(heap,n,i);
    }

    for(int i=n-1;i>=0;i--){
        swap(heap[0],heap[i]);
        heapify(heap,i,0);
    }
}



int main(){

    int heap[] = {23,12,32,5,78,15,27};
    int n = sizeof(heap)/sizeof(int);

    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;

    heapSort(heap,n);

    for(int i=0;i<n;i++){
        cout<<heap[i]<<" ";
    }

}