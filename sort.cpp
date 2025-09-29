#include<iostream>
using namespace std;

// selection sort
void selection_sort(){
    // minimum element of a n sized array is found and placed at the start 
    // process is repeated for a (n-1) sized array till all the elements are exhausted and the array is sorted
    int a[6] = {1,4,2,5,2,8};
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


int main(){
    selection_sort();
    return 0;
}