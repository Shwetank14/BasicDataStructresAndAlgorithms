// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n){
    
    n = n-1;
    // Your code here
    
    /******************
     * You just need to complete this
     * function and return the vector
     * containing the leaders.
     * ***************/
     vector<int> v;
     stack<int> s;
     s.push(arr[n]);
     v.push_back(arr[n]);
     n--;
     while(n>=0){
         
        while(s.size()>0 && arr[n]>=s.top()){
             s.pop();
         }
         if(s.size() == 0){
            v.push_back(arr[n]);
            s.push(arr[n]); 
         }
         n--;
     }
     
     reverse(v.begin(),v.end());
     
     
     return v;
     
    
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
