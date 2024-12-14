#include<iostream>
using namespace std;

int main(){
   /*int a = 4;
   int b = 6;
        cout<< "a&b = "<< (a&b) << endl;
        cout<< "a|b = "<< (a|b) << endl;
        cout<< "~a = "<< (~a) << endl;
        cout<< "a^b = "<< (a^b) << endl;
       // Left shift concept and Right shift concept.  
        cout<<"17>>1 = "<< (17>>1) << endl; 
        cout<<"17>>2 = "<< (17>>2) << endl;
        cout<<"19<<1 = "<< (19<<1) << endl;
        cout<<"19<<2 = "<< (19<<2) << endl;
    */
   

   /*Question: Sum of all the numbers from one to n.

    int num, sum=0;
    cout<<"Enter the value of n =";
    cin>>num;

    for(int i=0; i<=num;i++){
        // sum=sum+i;
        sum+=i;        
    }
    cout<<"Sum="<<sum;  

   */
/*  Question: Fibonacci series 
    example: 0,1,1,2,3,5,8,13.... ;

    int n,first=0, second=1;
    cout<<"Enter n=";
    cin>>n;

    cout<<first<<","<<second;

    for(int i=0; i<n-2; i++){
        int nextnum = first + second;
        cout<<",";
        cout<<nextnum;       

        first= second;
        second=nextnum;
    }
*/

/* Question: Check the prime number

    int num;
    bool ans=true;
    cout<<"enter num=";
    cin>>num;


    for(int i=2; i<num; i++){
        if(num%i==0){
            ans=false;
        }
    }
    if(ans)
        cout<<"it's a prime number.";
    else
        cout<<"not a prime";

*/
/* Quetion: Subtract the product and sum of degit of integer.
   Example: if num=23 then sum= 2+3=5 and product= 2*3=6 then ans= 6-5= 1.
    int num;
    int sum=0,prod = 1;
    cout<<"enter num=";
    cin>>num;

    while(num!=0){
        int digit = num%10;
        prod= prod*digit;
        sum=sum+digit;

        num=num/10;
    }
    int ans = prod-sum;
    cout<<"Ans="<<ans;
*/

// Question: take an unsigned integer and print number of 1 in it (Hamming weight).
   
    unsigned int num;
    cout<<"Enter Num=";
    cin>>num;
    int count=0;

    while(num!=0){
        
        if(num&1){
            count++;
        }
        num=num>>1;
    }
    cout<<"Count="<<count;

   return 0;
}  
