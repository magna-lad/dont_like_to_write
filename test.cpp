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




class item 
{
static int count;
int number;
public :
void getdata(int a)
{
number=a;
count++;
}
void getcount(void)
{
cout<<"count:"<<count<<"\n";
}
};

int item :: count;
int main( )
{
item a,b,c; //count is intialized to zero 
a.getcount( ); // display count
b.getcount( );
c.getcount();

a.getdata(100); // getting data into  objects a,b,c
a.getcount();
b.getdata(200);
b.getcount();
c.getdata(300);
c.getcount();
cout<<"After reading data "<<"\n";
//a.getcount(); b.getcount();c.getcount(); // display count
return 0;
}



