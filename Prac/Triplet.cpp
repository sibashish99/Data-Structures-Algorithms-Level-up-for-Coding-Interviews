
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> tripletSum(vector<int> arr, int sum)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<vector<int>> res;

    // pich every arr[i] and pair sum for remaining element
    for (int i = 0; i < n - 3; i++)
    {
        int l = i + 1;
        int r = n - 1;

        //two pointer approach
        while (l < r)
        {
            int curr_sum= arr[i];
            curr_sum += arr[l];
            curr_sum += arr[r];

            if (curr_sum == sum){
                res.push_back({arr[i], arr[l], arr[r]});
                l++;
                r--;
            }
            else if (curr_sum < sum)
                l++;
            else
                r--;
        }
    }
    return {};
}
int main(){
    
   vector<int> arr{1,2,3,4,5,6,7,8,9,15};
   int sum= 18;
    
    auto res= tripletSum(arr,sum);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
