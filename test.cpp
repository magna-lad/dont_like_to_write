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



vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        int flag=0;
        for(int i=0;i<arr.size()-1;i++){
            if (arr[i]==arr[i+1]){
                flag=1;
            }
        }
        if (flag==1){
            ans.emplace_back(arr[0]);
            return ans;
        }
        for(int i=0;i<arr.size()-1;i++){
            if (arr[i]%arr[i+1]==0){
                ans.emplace_back(arr[i]);
                continue;
            }
            ans.emplace_back(arr[i]);
        }
        return ans;
}


int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for( int i=0;i<n+1;i++){
            if (arr[i]!=i+1){
                return i+1;
            }
            
        }
}

int maxConsecutiveOnes(int n) {
        // code here
        int count=0;
        //int count2;
        while(n!=0){
            int k;
            k=(n >>1)&1 ;
            cout<<k<<endl;
            n>>=1;
        }
        return count;
        
    }


vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> temp1;
    vector<int> temp2;
    int n=a.size();
    int m=b.size();
    // for a
    //int j=1;
    temp1.emplace_back(a[0]);
    for(int i=1;i<n;i++){
        while(i<n && a[i-1]==a[i]) {i++;}
        if(i==n) break;
        temp1.emplace_back(a[i]);
    }
    temp2.emplace_back(b[0]);
    for(int j=1;j<m;j++){
        while(j<m && b[j-1]==b[j] ){j++;}
        if (j==m) break;
        temp2.emplace_back(b[j]);
    }

    vector<int> merged;
    int i = 0, j = 0;
    while (i < temp1.size() && j < temp2.size()) {
        if (temp1[i] < temp2[j]) {
            merged.push_back(temp1[i]);
            i++;
        } else if (temp1[i] > temp2[j]) {
            merged.push_back(temp2[j]);
            j++;
        } else {  // Equal elements
            merged.push_back(temp1[i]);
            i++;
            j++;
        }
    }

    // Step 4: Append remaining elements
    while (i < temp1.size()) {
        merged.push_back(temp1[i]);
        i++;
    }

    while (j < temp2.size()) {
        merged.push_back(temp2[j]);
        j++;
    }
    
    for(int i=0;i<temp1.size();i++){
        cout<<temp1[i]<<' ';
    }
    cout<<endl;
    for(int i=0;i<temp2.size();i++){
        cout<<temp2[i]<<' ';
    }

    return merged ;
}


int search(int n, int arr[]) {
        // code
        int j;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]) {
                i+=2;
            }
            else {
                j=i;
                //break;
            }
        }
        return arr[j];
}





int main(){
    int arr1[5]={1,1,2,5,5};
    //vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //cout<<mat[1][0];
    //spirallyTraverse(mat);
    cout<<abs(-1);



    ///cout<<result<<endl;
    //for(auto iter=result.begin();iter!=result.end();iter++){
    //    cout<<*(iter)<<' ';
    //}
}