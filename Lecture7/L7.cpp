#include<bits/stdc++.h>
// #include<math.h>
using namespace std;

int main(){
//Question : Conversion from darimal to binary.
int n;
cout<<"Enter number to convert = ";
cin >> n;

/* Approch 1:
cout<<"You entered= "<<n<<endl;
int i = 0, ans = 0;
string bin="";
while(n > 0){
    int bit = n&1;
    if(bit) bin+='1';
    else bin+='0';
    ans +=( bit*pow(10,i));
    n = n>>1;
    i++;
    // cout<<ans<<",";
}
reverse(bin.begin(),bin.end());
    cout<<bin<<endl;
*/
//Approch 2: 
int i=0, ans=0;
while(n!=0){
    cout<<"Itteration="<<i+1<<endl;
    int bit= (n&1);
    cout<<"Bit="<<bit<<endl;
    // cout<<ans;
    ans = (bit*pow(10,i))+ans;
    cout<<"ans="<<ans<<endl;
    n=n>>1;
    i++;
    }
cout<< "Answer="<< ans;


// Question 2: Conversion of -ve intiger from Decimal to Binary. 

// Question3: Conversion Binary to Decimal.
/*int ans=0, i=0;
while(n!=0){
    int digit = n%10;
    if(digit==1)
    ans = pow(2,i) + ans;
    n = n/10;
    i++;
}
cout<< "Answer is = "<<ans<<endl; 
/
        int x=n, ans = 0, mask=0;
        while(x!=0){
            mask = (mask<<1|1);
            x = x>>1;   
        }
        ans = (~n)&mask;
        cout<<"anser="<<ans<<endl;

        return ans;

*/

return 0;

}