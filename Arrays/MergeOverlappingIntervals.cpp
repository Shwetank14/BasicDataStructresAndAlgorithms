//Merge overlapping intervals
// task is to merge the overlapping intervals in a given list of intervals.
/*  Example: 
        for input : 6 8 1 9 2 4 4 7
            output: 1 9


    Time complexity : O(nLog(n));        
*/

#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;

int main(){

    pair<int ,int>p;
    vector<pair<int,int>> v;
    int n;cin>>n;

    for(int i=0;i<n;i++){           // Entering the intervals int the vector of pair of integers
        cin>>p.first>>p.second;
        v.push_back({p.first,p.second});
    }

    sort(v.begin(),v.end());        // sort the pair in the increasing order of their first element 

    stack<pair<int,int>> st;        // Using stack for checking the merging pairs

    auto it = v.begin();

    st.push({it->first,it->second});
    it++;
    while(it!=v.end()){

        if(it->first <= st.top().second){
            st.top().second = max(st.top().second,it->second);
        }      
        else{
            st.push({it->first,it->second});
        }

        it++;
    }

    while(st.size()>0){                                     // Empty the stack and print all the intervals after merging.
        cout<<st.top().first<<" "<<st.top().second<<endl;
        st.pop();

    }


    /* Note : The output will not be in the sorted order for that clear the vector and insert the elements of the stack in sorted order 
                the complexity remains the same */
 
}
