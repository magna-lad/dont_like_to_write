#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<map>
#include<string>
#include<unordered_map>
using namespace std;

int fib(int n, vector<int>& memo) { // reference of the array memo is passed
   if (n==0) return 0;
   if (n==1) return 1;
   if (memo[n]!= -1) return memo[n]; // if already there return it

   memo[n] = fib(n-1,memo) + fib(n-2,memo);
   return  memo[n];
}
    // many numbers are being repeated-> store the new numbers in an array and reuse the already stored numbers

int main(){
    int n=6;
    vector<int> memo(n+1,-1);
    int k=fib(n,memo);

    cout<<k;
}





// many numbers are being repeated-> store the new numbers in an array and reuse the already stored numbers
// initially fill with -1
// if not present store it
// if already present return the number 