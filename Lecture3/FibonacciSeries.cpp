#include<iostream>
using namespace std;

int main(){
int First =  0, n;
cout<<"Enter n=";
cin>>n;
int second = 1;
cout<< First <<","<< second <<",";
for(int i=0; i<=n;i++){
    int next= First + second;
    cout<<next<<",";
    First= second;
    second = next;
}
return (0);

}