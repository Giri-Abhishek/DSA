#include<iostream>
using namespace std;

int main(){
    // While loop:
    // int num=1;
    // while(num <= 10){
    //     cout<< num<<endl;
    //     num = num + 1;
    // }
// Question: program to print Sum of 1 to n.
    // int n, sum=0;
    // cout<<"Enter the value of n: ";
    // cin>> n;
    // // sum = n*(1+n)/2 ; //we can apply this formula or below while loop.
    // while(n>=0){ 
    //     sum = sum + n;
    //     n--;}
    // cout<<"sum="<<sum;
    // Note: This question can be done by using the formula sum=n/2(fist num + Last num)

// Quesion: Program to sum all even numbers from 1 to n.
// solution:
    // int i=2,n, sum=0;
    // cout<<"Enter the value of n: ";
    // cin>> n;
    //     while(i<=n){
    //     sum = sum + i;
    //     i = i+2;}
    //         cout<<"sum="<<sum;
    
//  Question: program to convert Fahrenheit to Celsius 
// Solution:
    // int F, C=0;
    // cout<< "enter temperature in Fahranheit: ";
    // cin>> F;
    // C = ((F-32)*(9/5));
    // cout<<F<<"(Fahrenheite temp)"<< "=" <<C<< "(Celsius)";
    
// Question: Program to find given number is prime or not.
// Solution 1:
    // int num, j;    //count=0;
    // cin>>num;
    // bool isPrime = 1;
    // while(j<num){
    //     if(num%j==0){
    //         count++;    
    //     }
    //     j++;
    // }    
    // if(count){
    //     cout<<"Number is not prime"<<endl;
    // }else{
    //     cout<<"Number is Prime"<<endl;
    // }
// Solution 2
//    for(j=2;j<num;j++){
//      if(num%j==0){
//         isPrime = 0;
//         break;
//      }
//    }
//     if(isPrime==0){
//         cout<<" the number not is prime";
//     }else{
//         cout<<" the number is prime";
//     }

// Program to check wheather the entered value is Upercase/Lowercase/ Numaric value,

    char a;
    cout<< "Enter value: ";
    cin>>a;
    if(a>64 & a<91){
        cout<<"The enter value is Uper case charecter";
    }
    else if(a>96 & a<123){
        cout<<"The enter value is Lower case charecter";
    }
    else if (a>47 and a<58){
        cout<<"This is numaric";
    }

    return 0;
}