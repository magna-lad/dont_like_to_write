#include<iostream>
#include<vector>
using namespace std;

// selection sort
void selection_sort(){
    // minimum element of a n sized array is found and placed at the start 
    // process is repeated for a (n-1) sized array till all the elements are exhausted and the array is sorted
    // time complexity- O(n^2) -> best,worst and average case
    int a[6] = {4,1,3,9,7};
    int mini;
    int temp;
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            if (a[j]<a[i]){ // < -> for ascending order, '>' -> for descending order
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<' ';
    }
}

void bubble_sort(){
    // the maximum element is bubbled to the top
    // worst- O(n^2);
    // best - O(n); -> if the array is already sorted

    int arr[6] = {4,1,3,9,7,8};
    int temp;
    int flag=0;
    for(int i=0;i<6;i++){
        flag=0;
        for(int j=0;j<6-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=1;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        if (flag==0){
            break;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<' ';
    }
}

void insertion_sort(){
    // here the sorting will start from the righmost position with the sorted array of the size=0 till the arr.size()
    // worst case = O(n^2)
    // best case = O(n)
    int arr[6] = {4,1,3,9,99,8};
    int temp;
    for(int i=0;i<6;i++){
        int j=i;
        while(j>0 && (arr[j]<arr[j-1])) // j>0 and not j>=0 as then during arr[j-1] the index will go to -1, ie, index error
        {
            temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<' ';
    }
}


void merge_sort(vector<int>& arr,int l,int r){
    if (l==r) return; // base case
    vector<int> temp;
    int left = l;
    int mid = (l+r)/2;
    int right = mid+1;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while(left<=right){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right<=left){
        temp.emplace_back(arr[right]);
        right++;
    }
    for(int i=l;i<r;i++){
        arr[i] = temp[i-l];
    }
    merge_sort(arr, l, r-1);
    return;
}

int main(){
    //selection_sort();
    //bubble_sort();
    //insertion_sort();

    vector<int> arr={3,2,4,2,1};
    merge_sort(arr,0,arr.size()-1);
    for(auto iter=arr.begin();iter!=arr.end();iter++){
        cout<<*(iter)<<endl;
    }
    return 0;
}