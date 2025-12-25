#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;
// testified on leetcode, ninja, gfg
vector<vector<int>> triplet(int n, vector<int> &arr){
    // Write your code here.

    
    set<vector<int>> s; //SC(K*3) K- no. od unique triplets
    sort(arr.begin(), arr.end()); //TC-nlogn
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int target = arr[i] +arr[j] + arr[k];

            if(target==0){
                vector<int> temp = {arr[i], arr[j], arr[k]};
                //sort(temp.begin(),temp.end()); // no need as sorted numbers will be supplied by default
                s.insert(temp);
                j++;
                k--;
            }
            else if(target>0){
                k--;
            }
            else if(target<0){
                j++;
            }
        }
    }
    vector<vector<int>> ans(s.begin(),s.end()); //TC(nlogn)
    return ans;
}
// TC- n^2 slightly lower than this due to insertion but ok