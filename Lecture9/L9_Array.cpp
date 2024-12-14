#include<iostream>
using namespace std;

// Function to print an Array.
void printArray(int arry[],int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<< " ";
    }
}

// Fuction to find the max element in an array.
int maxElement(int arry[], int size){
    int maxi = INT32_MIN;
    for(int i=0; i<size;i++){
            maxi = max(maxi,arry[i]); // Pr-edefine fun to find Max value
    //    if(arry[i]>max){
    //     max = arry[i];
       }    
    return maxi;
}

// Fuction to fin min element in an array.
int minElement(int arry[], int size){
    int mini = INT32_MAX;
    for(int i=0; i<size;i++){
        mini  = min(mini,arry[i]); // Pr-edefine fun to find Min value
    //    if(arry[i]<min){
    //     min = arry[i];
    //    }
    }
    return mini;
}

// Function to find sum of all element in an array.
int sumOfElement(int arry[], int size){
    int sum = 0;
    for(int i=0; i<size;i++){
        sum = sum + arry[i];       
    }
    return sum;
}

// Function to search an element in an array.
bool search(int arry[], int size,int n){
    for(int i=0; i<size; i++){
        if(arry[i]==n){
            return true;
        }
    }
    return false;
}

// Function to reverse an array

void reverse(int arry[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arry[start], arry[end]);
        start++;
        end--;
    }
    
}



int main()
{
    // // Initialisation 
    // int arry[15];  //={1,3,4,5,6,7,8,9,1,8};
    // for(int i=0; i<5;i++){
    //     cin>>arry[i];
    // }
    // int arraySize = sizeof(arry);
    // int arrayLength = sizeof(arry)/sizeof(int);

    // cout<<"size of an array = "<< arraySize<< endl;
    // cout<<"Length of an array = "<< arrayLength<< endl;
    // // printArray(arry, 10);

// Question: Program to find Manxium and Minimum element of an array.
/*
    int size;
    cout<< "Enter Size of an array =";
    cin>>size;
    int arry[size];;
    cout<< "Enter the element of an array"<< endl;
        for(int i=0; i<size;i++){
        cin>>arry[i];
        }
    int max = maxElement(arry, size);
    int min = minElement(arry, size);
    cout<< "The Maximum element of an array = "<< max << endl;
    cout<< "The Minimum element of an array = "<< min << endl;
*/

// Question: Sum of all ement in an Array.
 /*   
    int size;
    cout<< "Enter Size of an array =";
    cin>>size;
    int arry[100];;
    cout<< "Enter the element of an array"<< endl;
        for(int i=0; i<size;i++){
        cin>>arry[i];
        }
    cout<<"sum of all element of an array = "<< sumOfElement(arry, size)<<endl;
*/

// Linear Search:
/*
    int arry[12] = {2, 3, 7, -4, -7, -32, 23, -6, 2, 35, 76, -98};
    int n;
    cout<< "Enter value to search: ";
    cin>> n;
    if(search(arry,12,n)){
        cout<<"Yes the number is present :)"<<endl;
    }else cout<<"No the number is Not present :)"<<endl;
*/

// Reverse an Array.
    int size;
    cout<< "Enter Size of an array =";
    cin>>size;
    int arry[100];;
    cout<< "Enter the element of an array"<< endl;
        for(int i=0; i<size;i++){
        cin>>arry[i];
        }
    cout<< "After reversing the array"<< endl;
    reverse(arry, size);
    printArray(arry, size);
    
    return 0;

    
}