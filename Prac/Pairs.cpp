
#include <bits/stdc++.h>
using namespace std;
vector<int> findPair(vector<int> arr, int sum){
    unordered_set<int> s;
    vector<int> res;
    
    for(int i=0;i<arr.size();i++){
        int x= sum- arr[i];
        if(s.find(x)!=s.end()){
            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }
        s.insert(arr[i]);
    }
    return {};
    
}
int main(){
    std::vector<int> arr{10,5,2,3,-6,9,11} ;
    int sum=4;
    
    auto p = findPair(arr,sum);
    if(p.size()==0){
        cout<<"No such pair!";
    } else{
        cout<<"["<<p[0]<<","<<p[1]<<"]";
    }
}
