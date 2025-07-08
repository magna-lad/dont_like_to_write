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
    cout<<p2.second<<endl; // Accessing the first element of the pair

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
    vector<int> v4(5); // creates a vector with size of 5 with garbage values
    
    //note
    // to create a copy vector with similar size
    vector<int> v5(v3); // creates a copy of v3

    // iterators
    // as the name suggests, used to iterate 'vectors'
    vector<int> test={100,200,300,400};

    vector<int>::iterator ik = test.begin(); // i points to the address of the starting place of the vector stl
                                            // and *(i) lets us get the data inside the address
    cout<<*(ik)<<endl;

    vector<int>::iterator it=test.end(); // due to .end, it points to the address just behind the last item of the vctor,ie, a garbage value
    cout<<*(it)<<" Garbage value"<<endl;
    
    // for iterating through the vector
    for(vector<int>::iterator i=test.begin(); i!=test.end();i++ ){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    
    cout<<"using auto"<<endl;
    // or use auto-> identifies the datatype automatically
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;

    //erasing data from vector
    // .erase(start,end)
    // start-address of the starting index
    // end- address of the element just after the last element to be deleted
    // the vector resizes itself 
    test.erase(test.begin());
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;

    test.emplace_back(500);

    test.erase(test.begin(),test.begin()+2);

    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;

    // how to insert in the vector
    // .insert(start,number, amount ) 
    // number is optional
    // start- where the insertion starts
    // number- the number of times the item needs to be inserted
    // amount- the amount to be inserted
    // if number and amount- addresses
    // the amount in the addresses are directly added to the vector

    test.insert(test.begin(),300);
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    test.insert(test.begin(),3,999);
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    vector<int> k(2,777);
    test.insert(test.begin(),k.begin(),k.end());
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;

    // to calculate size of the vector
    cout<<"Size: "<<test.size()<<endl;

    vector<int> t1={1,2,3};
    cout<<"t1: ";
    for(auto iter=t1.begin();iter!=t1.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    vector<int> t2={999,998,997};
    cout<<"t2: ";
    for(auto iter=t2.begin();iter!=t2.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    t1.swap(t2);
    cout<<"t1: ";
    for(auto iter=t1.begin();iter!=t1.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    cout<<"t2: ";
    for(auto iter=t2.begin();iter!=t2.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    cout<<"test: ";
    test.insert(test.begin(),k.begin(),k.end());
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    cout<<"Clearing test-> "<<endl;
    test.clear();
    cout<<"test: ";
    for(auto iter=test.begin();iter!=test.end();iter++){
        cout<<*(iter)<<" ";
    }
    cout<<endl;
    //.empty-  returns boolean value if empty- true or not

    cout<<test.empty()<<endl;
    cout<<t1.empty()<<endl;
}
int main(){
    //explainPair();
    explainVector();
}