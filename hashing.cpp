#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
//int arra[100000] = {0};  // outside the array 10^6 is possible
void hashing_numbers(){
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

    ///int arra[100000] = {0}; // cannot handle 10^6 inside the main
    // for storing numbers greater than 10^6 we something else - stl maps
}

void hashing_alphabets(){
    string s= "affdafegqhrgqwrg";
    vector<int> memo(26,0); // 26 indices for 26 alphabets
    int idx=0;
    for (auto iter = s.begin();iter!=s.end();iter++){
        idx = *(iter) - 'a' ;
        memo[idx] +=1;
    }

    for (auto iter = memo.begin();iter!=memo.end();iter++){
        char k = *(iter);
        cout<<k<<" ";
    }
    cout<<endl;
    for (auto iter = memo.begin();iter!=memo.end();iter++){
        cout<<*(iter)<<" ";
    }
}

void hashing_stl_maps(){ 
    // in maps only the element (key) and its frequency is added in an ordered manner
    // unlike the array method with the memo array here only the elements which appear are added
    //key,frequency -> used as this  
    // fetching and storing of data for all types (worst,average,best case ) takes log(N) N-> number of elements in the map
    
    int arr[7] = {1,4,2,5,7,7};
    map<int,int> mpp;
    // here the input can be anything, pair, etc
    int q=0;
    while(q!=6){
        mpp[arr[q]]++; // adding the element into the map
        q++;
    }
    for(auto iter : mpp){
        cout<<iter.first<<" -> "<< iter.second <<endl;
    }
}

void hashing_stl_unordered_maps(){
    
    // as the name suggests the maps are undordered unlike ordered maps
    // Complexity --> fetching and storing - best case- O(1)
                                          // worst case- O(N) -> happens very rarely due to internal collisions like chaining
    // how does hashing work for O(N)
    // refer to https://www.youtube.com/watch?v=KEs5UyBJ39g from 55:00 to end


    unordered_map<int,int> mpp;
    // here the input can only be singular entities not pair and all


            

}
int main(){
    //hashing_numbers();
    //hashing_alphabets();
    //hashing_stl_maps();
    hashing_stl_unordered_maps();

}