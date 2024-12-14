#include<iostream>
using namespace std;

//Function to find Power of number.
int power(){
    int a, b;
    cin>>a>>b;
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}

//Function to find number is even or odd.
bool isEven(int num1){
    if(num1&1==1){//odd
        return 0;
    }
    //Even
    return 1;
}

// Fuction to find the factorial.
int factorial(int n){
    int fact =1;
    for(int i=1; i<=n;i++){
        fact = i*fact;
    }
    return fact;
}

// Function to Calculate nCr.
int nCr(int n, int r){
    int num = factorial(n);
    int Denom = factorial(r)*factorial(n-r);
    int ans = num/Denom;
    return ans;
}
// Function to check the number is prime or not.

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }        
    }
    return 1;
}

// Fuction to print counting,
void printCounting(int n){

    for(int i=1; i<=n; i++){
        cout<< i << ", ";
    }
    cout<<endl;

}



int main(){
//   This is for Power Function:
     /*   
    int ans = power();
    cout<< "Answer is = "<<ans;
    */

//    This is for Odd Even:
    /*
    int a;
    cin>>a;
    if(isEven(a)){
        cout<<"Number is Even"<<endl;
    }else{
        cout<<"number is odd"<<endl;
    }
    */
//  This is for calculation of nCr.
    /*
    int n, r;
    cin>>n>>r;
    cout<< "The ans of nCr is ="<<nCr(n,r); 
    */

// This is to print counting.
    /*int n;
    cin>>n;
    printCounting(n);
    */

// This is to chek whether the number is prime or not.
    int n;
    cin>>n;
    
    if(isPrime(n)){
        cout<< "The number is prime "<< endl;
    } else{
         cout<< "The number is Not a prime "<< endl;
    }
    
    return 0;



}