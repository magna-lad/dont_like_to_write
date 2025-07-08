// standard template library- contains algo, containers , iterators, functions in a minimized form
// STL is a collection of C++ template classes to provide general-purpose classes and functions with templates

#include<iostream>
#include<vector>
using namespace std;

void explainPair(){
    // pair is a class template that provides a way to store two heterogeneous objects as a single entity.
    pair<int,int> p={1,2};
    cout<<p.first<<endl; // Accessing the first element of the pair
    cout<<p.second<<endl; // acccessing the second element of the pair

    pair<int,string> p2= {1,"sangam"};
    cout<<p2.first<<endl; // Accessing the first element of the pair

    //making an array of pairs
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};// makes an array of pairs;
    cout<<arr[0].first<<endl; // Accessing the first element of the first pair
    cout<<arr[0].second<<endl; // Accessing the second element of the first pair

    //pair withint pairs
    pair<int, pair<int, int>> p3= {1,{2,3}};
    cout<<p3.second.first<<endl; // Accessing the first element of the second pair
}



void explainVector(){
    // Vector is also a container in STL which can dynamically resize itself unlike arrays.
    vector<int> v; // declaring a vector of integers
    v.push_back(1); // adding an element to the vector
    v.emplace_back(2); // adding an element to the vector
    // for any case emplace_back is better or more efficient than push_back

    //special case for pair 
    vector<pair<int,int>> v2;
    v2.push_back({1,2}); // adding a pair to the vector
    v2.emplace_back(1,2); // adding a pair to the vector using emaplace_back //notice the curly braces are not used here

    // starting a vector with initial size
    vector<int> v3(5,10); // creates a vecotr with size of 5 and all elements are initialzied to 10
    vector<int> v4(5); // creates a vectro with size of5 with garbage values
    
    //note
    // to create a copy vector with similar size
    vector<int> v5(v3); // creates a copy of v3

    
    

}
int main(){
    explainPair();
    explainVector();
}