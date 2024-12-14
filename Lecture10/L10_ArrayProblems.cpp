#include<iostream>
using namespace std;
std::includes()

// Function to print an Array.
void printArray(int arry[],int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<< " ";
    }
}

//Function find Swap Alternative.
void swapAlter(int arry[], int size){
    for(int i=0; i<size;i+=2){
        if(i+1<size){
            swap(arry[i], arry[i+1]);
        }
    }
}

// Fuction to find the unique occurrences.

int findUnique(int arry[], int size){
//    Approch 1:
    // int ans = 0;
    // for(int i=0; i<size; i++){
    //     ans = ans ^ arry[i];
    // }
    // return ans;



   //Approch 2:
    // cout<<"size="<<size<<endl;
    // printArray(arry, size);

    int ans=0;
    
    for(int i=0;i<size; i++){
        bool flag=false;
        for(int j=0; j<size; j++){

            if((i!=j) && arry[i]==arry[j]){
                flag = true; 
                break;}
                
        }

        if(!flag){
            // cout<<"arry[i]="<<arry[i]<<endl;
           return arry[i];
       }
       }
}


int findDuplicate(int arry[], int size){
    // Approch1: 
    

    for(int i=0; i<size-1; i++ ){

    }
}


int findTriplet(int arry[], int size, int S){

    

}



int main()
{   

    int size, S;
    cout<< "Enter Size of an array =";
    cin>>size;
    int arry[100];
    if(size&1)
    cout<< "Enter the element of an array"<< endl;
        for(int i=0; i<size;i++){
        cin>>arry[i];
        }

    cout<<"Enter the value of S =";
    cin>>S;

    cout<< "Array after Operation "<< endl;
// Question1: Swap alternative: example {1, 2, 4, 6, 7, 8} after operation {2, 1, 6, 4, 8, 7}

//    swapAlter(arry, size);
//    printArray(arry, size);

    
// Question: Find Unique: example {2,3,4,4,3,2,9} so in this the unique is 9.
/*
    int ans = findUnique(arry, size);
    cout<<" Answer is = "<<ans<<endl;
*/

/*Question  Find the duplicate number in array.
// Example: i/p  arrar size= 5.
// i/p Array = [1,2,4,3,4]
// o/p ----> 4;
*/
// Solution:
//    findDuplicate(arry, size);
//    printArray(arry, size);

// Question: Triplet with Given sum
// Example: arry1={1,2,3,4,5} and S=12. Then we need to fine the triplet in which sum of element is equal to S.

      findTriplet(arry, size, S);
      printArray(arr)


return 0;
}