#include<iostream>
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

int main(){
    //selection_sort();
    bubble_sort();
    return 0;
}