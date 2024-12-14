#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number to know the day: ";
    cin>>n;
    
    /*switch (n)
    {
    case 1: cout<<" sunday"<<endl;
            break;
    case 2: cout<<" Monday"<<endl;
            break;
    case 3: cout<<" Tuesday"<<endl;
            break;
    case 4: cout<<" Wednessday"<<endl;
            break;
    case 5: cout<<" Thusday"<<endl;
            break;
    case 6: cout<<" Friday"<<endl;
            break;
    case 7: cout<<" Saturday"<<endl;
            break;
    default: cout<<"Not a valid option"<<endl;
        break;
    }
    */

// /*Question: Program to find the number of notes used used for the given amount.
   int v, x, y, z;
   v = n/100;
   n = n%100;
   x = n/50;
   n = n%50;
   y = n/20;
   z = n%20;
   cout<<"Number of 100 Notes = "<<v<< endl;
   cout<<"Number of 50 Notes = "<<x<< endl;
   cout<<"Number of 20 Notes = "<<y<< endl;
   cout<<"Number of 1 Notes = "<<z<< endl;
        

    
    return 0;
}