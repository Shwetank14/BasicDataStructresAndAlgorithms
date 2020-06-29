#include<bits/stdc++.h>
using namespace std;


vector<int> FindMndR(int *arr, int n){
    
    vector<int> k;
    
    bool a[n];
    
    int flag = 0;
    for(int i=1;i<=n;i++){
        a[i] = false;
    }
    
    for(int i=1;i<=n;i++){
        
        if(a[arr[i]] == true && flag == 0){
            k.push_back(arr[i]);flag = 1;
        }
        a[arr[i]] = true;
    }
    
    for(int i=1;i<=n;i++){
        if(a[i] == false){
            k.push_back(i);break;
        }
    }
    
    return k;
    
}


int main()
 {
    int T;
    cin>>T;       //Test cases
    
    while(T--){
    //code
    
    int n;cin>>n;
    int arr[n];
    
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    
    auto res = FindMndR(arr,n);
    
    for(auto x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    
    }
	
	return 0;
}
