#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int partition(vector<int> &arr,int low,int high){
        int pivot = arr[low];
        int i = low+1;
        int j = high;
        while(i<=j){
            while(i<=high && arr[i]<=pivot) i++;
            while(j>=low && arr[j]>pivot) j--;
            if (i<j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]);
        return j;
    }
    void quickSort(vector<int> & arr,int low,int high){
        if (low>=high) return ;
        
        int pivot = partition(arr,low,high);
        
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
    int largest(vector<int> &arr) {
        // code here
        // quick sort -> largest element will be at the last
        if (arr.size()==1) return arr[0];
        // edge case- all equal- ans at idx 0
        // edge case - single element- ans at idx
        // O(n)<O(nlog(n))
        int flag=1;
        for(int i=0;i<arr.size();i++){
            if (arr[0]!=arr[i]){
                flag=0;
                break;
            }
        }
        if (flag==1) return arr[0];
        
        // for all the other cases
        //using quick sort
        quickSort(arr,0,arr.size()-1);
        return arr[arr.size()-1];
    }
};
