
#include <bits/stdc++.h>
using namespace std;
int highestPick(vector<int> arr){
    int n= arr.size();
    int maxm=0;
    
    for(int i=1;i<=n-2;){
        //if arr[i] is peak or not
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            int count =1;
            int j=i;
            //count baclword
            while(j>=1 && arr[j]>arr[j-1]){
                j--;
                count++;
            }
            
            //count forward
            while(i<=n-2 && arr[i]>arr[i+1]){
                i++;
                count++;
            }
            maxm= max(maxm, count);
        } else{
           i++;
       }
    }
    return maxm;
}
int main(){
  std::vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
  cout<<highestPick(arr);
}
