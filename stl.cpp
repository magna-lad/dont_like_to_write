// standard template library- contains algo, containers , iterators, functions in a minimized form
// STL is a collection of C++ template classes to provide general-purpose classes and functions with templates

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

    //pair with int pairs
    pair<int, pair<int, int>> p3= {1,{2,3}};
    cout<<p3.second.first<<endl; // Accessing the first element of the second pair
}



void explainVector(){
    // sinlgy linked list

    // Vector is also a container in STL which can dynamically resize itself unlike arrays.
    vector<int> v; // declaring a vector of integers
    v.push_back(1); // adding an element to the vector
    v.emplace_back(2); // adding an element to the vector
    // for any case emplace_back is better or more efficient than push_back
    // push_back- makes a temporary object and copies it in the container of the original object and destroys the temporary object
    // emplace_back- directly makes the new object in the original container

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
    for(auto iter=test.begin();iter!=test.end();iter++){ // auto- automatically senses the datatype of the object formed
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


void explainList(){
    // double linked lists
    // aage se bhi and piche se bhi connected hai
    list<int> l={1,2,3,4};
    cout<<"list: ";
    for(list<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    // used to push at the end
    l.push_back(999);
    cout<<"list: ";
    for(list<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    l.emplace_back(909); // always better or similar to push_back()
    cout<<"list: ";
    for(list<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    // used to push at the front
    l.push_front(111);
    cout<<"list: ";
    for(list<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    l.emplace_front(101);
    cout<<"list: ";
    for(list<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;


    // other functions are the same
    // begin, end, rbegin, rend, size, clear, swap
}


void explainDeque(){
    // same as lists- more info latter
    deque<int> l={1,2,3,4};
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    // used to push at the end
    l.push_back(999);
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    l.emplace_back(909); // always better or similar to push_back()
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    // used to push at the front
    l.push_front(111);
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    l.emplace_front(101);
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;

    // new
    l.pop_back();
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    l.pop_front();
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    cout<<l.back()<<endl;
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<"deque: ";
    for(deque<int>::iterator i=l.begin();i!=l.end();i++){
        cout<<*(i)<<" ";
    }
    cout<<endl;



    // other functions are the same
    // begin, end, rbegin, rend, size, clear, swap
}


void explainStack(){
    // LIFO- last in first out
    // the one which goes the last comes out the first
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.emplace(2);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<s.size();
    // we cannot print the stack only the top can be printed
}

void explainQueue(){
    // it is first in first out (FIFO)
    queue<int> q;
    q.push(4); //first- front
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(0); //last- back

    cout<<q.back()<<endl; // prints the element at the end
    cout<<q.front()<<endl; // prints the element at the front

    q.pop(); // deletes the element to the font

    cout<<q.front()<<endl;
}

void explainPQ(){
    // not a linear data structure
    // it is a tree

    // the maximum value is stored in the top
    // also called max heap
    priority_queue<int> pq ;
    pq.emplace(1); //{1}
    pq.emplace(10); //{10,1}
    pq.emplace(100); //{100,10,1}

    cout<<pq.top()<<endl; // 100 will be printed out O(1)

    // the minimum value is stored in the top
    // also called min heap
    priority_queue<int,vector<int>,greater<int>> pq_min;
    pq_min.emplace(1); //{1}
    pq_min.emplace(10); //{1,10}
    pq_min.emplace(100); //{1,10,100}

    cout<<pq_min.top()<<endl; // 1
}


void explainSet(){
    // sorted and unique elements are stored
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.emplace(2);
    st.emplace(10);

    //for(auto iter=st.begin();iter != st.end();iter++){
    //    cout<<*(iter)<<endl;
    //}

    //every complex function in log(n)
    // start,end,rstart,rend are same as vector

    auto idx = st.find(2); // returns the address of the block in which 2 resides

    auto idx2 = st.find(100); // if the input is out of bounds the address returnes is just after the last element

    int cnt = st.count(1); // gives 1 if there and 0 if not
    st.erase(2); // simply erases an element

    //erase(start,end) both should be addresses  [start,end)

    auto s = st.find(1);
    auto e = st.find(10);
    st.erase(s,e);

    // lower bound and upper bound
    
    // LOWER BOUND
    // lower_bound(a,a+n,x)
    // returns the iterator of the first occurence of a number not less than x 
    // if found from a to a+n (n-size of the array, if found- good
    // if not immediate next iterator address will be given
    // if the values are out of bound- returns garbage values
    vector<int> a = {1,3,4,5};

    auto i = lower_bound(a.begin(),a.end(),6);
    cout<<*(i)<<endl; 
    
    // UPPER BOUND
    // upper_bound(a,a+n,x)
    // returns the iterator of the first element greater than x
    // if found from a to a+n (n-size of the array, if found- good)
    // if not immediate larger number will be given out
    // if the values are out of bound- returns garbage values
    auto k = upper_bound(a.begin(),a.end(),4);
    cout<<*(k)<<endl;
    // in set same remember the address is returned
}

void explainMultiset(){
    // unlike set emphasis is only on the fact that the set is sorted
    // uniqueness in the elements uneccary
    multiset<int> m;
    m.emplace(1); //{1}
    m.emplace(1); //{1,1}
    m.emplace(1); //{1,1,1}

    m.erase(1); // erases all occurences of 1

    // to delete only once occurence
    m.erase(m.find(1)); //find will give the address of the first occurence of 1 and that particular 1 will be deleted
}

void explainUSet(){
    // no uniqueness
    // no order
    // totally randomised order
    // lower_bound and upper_bound doesn't work

}

void explainMap(){
    // similar to dictionaries in python
    // consists of key:item pair, the structure of the key can be anything but uniform in a map
    // the key-value pairs will be arranged in an ascending order with respect to the keys
    // the keys will always be unique

    map<int,int> m; // the key and item will both be integer

    m[1]=2; // the objects will be stored in sorted format with respect to the keys
    m[2]=10;
    m[3]=40;

    map< pair<int,int> ,int> k; // the key will be a pair and the items will be a singular integer
    k[{1,2}]=3;
    k[{3,4}]=4;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<m[1]<<endl;
    cout<<m[2]<<endl;

    auto ix = m.find(2); // will return the index of the value
    cout<<(*ix).first<<endl;

}

void explainMultiMap(){
    // can store duplicate of keys 
    // stored in ascending order like simple maps
    // rest all same as maps
    multimap<int,int> l;
}

void explainUnorderedMap(){
    // can store duplicate of keys
    // stored in randomized order
    unordered_map<int,int> l;
}

bool comp(pair<int,int> n1,pair<int,int> n2){
    if (n1.second>n2.second) return true; // already in descding order no need to change
    if (n1.second<n2.second) return false; // needed to be reversed, will be reversed automatically
    if (n1.second==n2.second){
        if (n1.first<n2.first) return true; 
        if (n1.first>n2.first) return false;     
    }
}
void explainSort(){
    // sort(start,end,comparator)
    // [star,end)
    // comparator- how should the values be compared
    // if comparator = empty-in descending order
    // if comparator = greater<int> - in ascending order
    // or we can make a custom comparator

    vector<pair<int,int>> l={{1,2},{3,2},{7,1},{4,8}};

    //sort(l.begin(),l.end());

    //for(auto iter=l.begin();iter!=l.end();iter++){
    //    cout<<*(iter)<<endl;
    //}

    //in ascening order
    //sort(l.begin(),l.end(),greater<int>()); // the syntax changes over time

    //for(auto iter=l.begin();iter!=l.end();iter++){
    //    cout<<*(iter)<<endl;
    //}

    //q- sort it in descending order according to second element
    //if the second element are equal sort it according to first element in ascending order
    
    sort(l.begin(),l.end(),comp);

    for(auto iter=l.begin();iter!=l.end();iter++){
        cout<<(*iter).first<<' '<<(*iter).second<<endl;
    }

}

void explainExtra(){
    // if want to find the number of set bits
    int n=6;
    
    int set = __builtin_popcount(n);
    cout<<set<<endl;

    // for long long
    long long m=131231231;
    int c = __builtin_popcountll(m);
    cout<<c<<endl;

    // to find all the permutations of a string
    string s = "123";
    
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end())); // works in dictioary order- so sort the original before proceeding
    vector<int> r={2,3,1,1,99} ;
    int maxi = *max_element(r.begin(),r.end());
    cout<<maxi<<endl;
}

int main(){
    //std::cout<<"hello"<<std::endl;
    //explainPair();
    //explainVector();
    //explainList();
    //explainDeque();
    //explainStack();
    //explainQueue();
    //explainPQ();
    //explainSet();
    //explainMultiset();
    //explainMap();
    //explainSort();
    //explainExtra();

}