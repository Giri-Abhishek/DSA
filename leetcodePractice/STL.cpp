#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main()
{
// deque:

    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    d.pop_front();
    

 /*List:

    list<int> l(4,4);
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

// */
    return 0;
}