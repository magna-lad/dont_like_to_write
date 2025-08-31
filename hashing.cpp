#include<iostream>
#include<vector>
using namespace std;
int arra[1000000] = {0};  // outside the array 10^6 is possible
int main(){
    // learning hashing
    // we need to find the frequency of how many times the elements appear in a given array
    // keep a memo array with indices as the elements of the input and the elements in the
    // array as the indices frequency
    
    // the array will at max contain 12 elements
    vector<int>  arr = {1,2,3,4,11};
    vector<int> memo(12,0);
    for (auto iter= arr.begin();iter<arr.end();iter++){
        memo[*iter]+=1;
    }
    cout<<endl;
    for (auto iter= arr.begin();iter<arr.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    for (auto iter= memo.begin();iter<memo.end();iter++){
        cout<<*(iter)<<" ";
    }

    int arra[100000] = {0}; // cannot handle 10^6 inside the main
    
}