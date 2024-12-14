#include<iostream>
using namespace std;

int main(){
    
    int n,i=1;
    cout<<"Enter value of n:";
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;
            j++;}
        cout<<endl;
        i++;
    }
    return 0;
}
// Question: Pattern
//      ***
//      ***
//      ***
    // int i=0;
    // while(i<3){
    //     int j=0;
    //     while(j<3){
    //         cout<<"*";
    //         j++;
    //     }i++;
    //     cout<<endl;
    // }

// Question: Pattern
//      111
//      222
//      333
    // int i=1;
    // while(i<=3){
    //     int j=1;
    //     while(j<=3){
    //         cout<<i;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // } 

// Question: Pattern
//      123
//      123
//      123
    // int i=1;
    // while(i<=3){
    //     int j=1;
    //     while(j<=3){
    //         cout<<j;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // } 

// Question: Pattern
//      321
//      321
// //   321
//     int i=1,n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }i++;
//         cout<<endl;
//     }

// Question: Pattern
//      123
//      345
//      678
    // int i=1,n,count=1;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<"  ";
    //         count++;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // } 

// Question: Pattern
//      *
//      **
//      ***
    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }i++;
    //     cout<<endl;
    // }

// Question: Pattern
//      1
//      22
//      333
    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // }

// Question: Pattern
//      1
//      23
//      456
    // int i=1,n, count=1;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // }

// Question: Pattern
//      1
//      23
//      345
    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     //int count= i;
    //     while(j<=i){
    //         cout<<i+j-1;  //cout<<count;
    //                       //count++;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // }

// Question: Pattern
//      1
//      21
//      321
    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     // int count= i;
    //     while(j<=i){
    //         cout<<i-j+1;    // cout<<count;
    //         // count--;
    //         j++;
    //     }i++;
    //     cout<<endl;
    // }

// Question: Pattern
//      AAA
//      BBB
//      CCC
    // int i=1,n;
    // //char ch = Word = 'A';
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     char ch = 'A' + i -1;
    //     while(j<=n){
    //         cout<<ch;         
    //         j++;
    //     }i++;
    //      //Word++;
    //     cout<<endl;
    // }


// Question: Pattern
//      ABC
//      BCD
//      CDE
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
        
    //     while(j<=n){
    //         char ch = 'A' + i + j -2;
    //         cout<<ch;         
    //         j++;
    //     }i++;
    //      //Word++;
    //     cout<<endl;
    // }
// Question: Pattern
//      A
//      BB
//      CCC
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
        
    //     while(j<=i){
    //         char ch = 'A' + j -1;
    //         cout<<ch;         
    //         j++;
    //     }i++;
    //      //Word++;
    //     cout<<endl;
    // }
// Question: Pattern
//      A
//      BC
//      CDE
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
        
    //     while(j<=i){
    //         char ch = 'A' + i+j -2;
    //         cout<<ch;       
    //         j++;
    //     }i++;
    //      //Word++;
    //     cout<<endl;
    // }
// Question: Pattern
//      D
//      CD
//      BCD
//      ABCD
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1; 
    //     char ch = 'A'+ n - i;
    //     while(j<=i){
    //         cout<<ch;
    //         ch++;       
    //         j++;
    //     }i++;
    //      //Word++;
    //     cout<<endl;
    // }
// Question: Pattern
//         *
//        **
//       ***
//      ****
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int space = n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;
    //     }
    //     int j = 1;
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }        
    //     i++;
    //      //Word++;
    //     cout<<endl;
    // }
// Question: Pattern
//     ****
//     ***
//     **
//     *
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int star = n-i+1;
    //     while(star){
    //         cout<<"*";
    //         star--;
    //     }      
    //     i++;
    //     cout<<endl;
    // }
// Question: Pattern
//     ****
//      ***
//       **
//        *
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=0,space= i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;           
    //         }  
    //     int star = n-i+1;
    //     while(star){
    //         cout<<"*";
    //         star--;
    //     }
         
    //     i++;
    //     cout<<endl;
    // }
// Question: Pattern
//     1111
//      222
//       33
//        4
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=0,space= i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;           
    //         }  
    //     int star = n-i+1;
    //     while(star){
    //         cout<<i;
    //         star--;
    //     }
    //     i++;
    //     cout<<endl;
    // }
// Question: Pattern
//        1
//       22
//      333
//     4444
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=0,space= n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;           
    //         }  
    //     int star = i;
    //     while(star){
    //         cout<<i;
    //         star--;
    //     }
    //     i++;
    //     cout<<endl;
    // } 
// Question: Pattern
//     1234
//      234
//       34
//        4
    // int i=1 ,n;
    // cin>>n;
    // while(i<=n){
    //     int j=0,space= i-1;
    //     while(space){
    //         cout<<" ";
    //         space--;           
    //         }  
    //     int star = i;
    //     while(star<=n){
    //         cout<<star;
    //         star++;
    //     }
    //     i++;
    //     cout<<endl;
    // }      
// Question: Pattern
//       1
//      23
//     456
//    
    // int i=1 ,n,count=1;
    // cin>>n; 
    // while(i<=n){
    //     int j=0,space= n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;           
    //         }  
    //     int star = i;
    //     while(star){
    //         cout<<count;
    //         count++;
    //         star--;
    //     }
    //     i++;
    //     cout<<endl;
    // } 
// Question: Pattern
//       1
//      121
//     12321
//    1234321
//    
    // int i=1 ,n;
    // cin>>n; 
    // while(i<=n){
    //     int j=0,space= n-i;
    //     while(space){
    //         cout<<" ";
    //         space--;           
    //         }  
    //     int num = i;
    //     int count=1;
    //     while(num){
    //         cout<<count;
    //         count++;
    //         num--;
    //     }
    //     int num2 =i-1;
    //     int count2 = i-1;
    //     while(num2){
    //         cout<<count2;
    //         count2--;
    //         num2--;
    //     }
    //     i++;
    //     cout<<endl;
    // }
// Question: Pattern
//    1234554321
//    1234**4321
//    123****321
//    12******21
//    1********1
    // int i=1 ,n;
    // cin>>n; 
    // while(i<=n){
    //     int num1 = n-i+1;
    //     int count1=1;
    //     while(num1){
    //         cout<<count1;
    //         count1++;
    //         num1--;
    //     }
    //     int star1 = i-1;
    //     while(star1){
    //         cout<<"*";
    //         star1--;
    //     }
    //     int star2 = i-1;
    //     while(star2){
    //         cout<<"*";
    //         star2--;
    //     }
    //     int num2 = n-i+1;
    //     while(num2){
    //         cout<<num2;
    //         num2--;
    //     }
    //     i++;
    //     cout<<endl;
    // }    
//     return(0);
// }