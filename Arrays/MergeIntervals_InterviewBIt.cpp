//InterviewBit Array question
// Question: Merge Intervals

#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;


struct Interval {       // defining interval sturcture

    int start;
    int end;
    Interval() : start(0) , end(0) {}
    Interval(int s, int e) : start(s), end(e) {}

};


vector<Interval> insertInterval(vector<Interval> &v, Interval newinterval){

if(v.size() == 0){                                          
    v.push_back({newinterval.start,newinterval.end});       // if vector is empty just add the intervals
    return v;
}

auto it = v.begin();

while(it!=v.end()){

    if(it->end < newinterval.start){                       // interval is ahead of the current interval
        it++;
    }
    else if(it->start > newinterval.end){
        v.insert(it,newinterval);                          // if both the intervals overlapp 
        break;
    }
    else{
        newinterval.start = min(newinterval.start , it->start);     
        newinterval.end = max(newinterval.end,it->end);     
        v.erase(it);                                        
    }

}

return v;

}


int main(){
 
    vector<Interval> v = {{1,7},{10,13},{14,17}};

    for(auto it = v.begin();it!=v.end();it++){

        cout<<"("<<it->start<<" "<<it->end<<")"<<" ";      // initial intervals
        
    }
    cout<<endl;
    Interval newinterval = Interval(4,8);                   // interval to be inserted
    cout<<"("<<newinterval.start<<" "<<newinterval.end<<")"<<endl;

    auto res = insertInterval(v,newinterval);


    for(auto it = res.begin();it!=res.end();it++){

        cout<<"("<<it->start<<" "<<it->end<<")"<<" ";       // print the resultant intervals
        
    }

    
}