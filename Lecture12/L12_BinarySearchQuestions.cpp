#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int ans = -1;
    int end = size-1, start = 0;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid -1;
        }else{
            start = mid +1;
        }
       mid = start + (end - start)/2;
    }
    return ans;
}

int firstOcc(int arr[], int size, int key){
    int start =0, end = size-1;
    int mid = start + (end-start)/2;
    int ans =-1;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1; 
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }

    mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start =0, end = size-1;
    int mid = start + (end-start)/2;
    int ans =-1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid +1 ; 
        }
        else if(key > arr[mid]){

            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int findPeakElement(int arr[], int size){
    int start = 0, end = size-1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid]>arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }   
    return start;

}

int findSqrt(int n){
            int s = 0;
            int e = n;
            long long int ans = -1;
            long long int mid = s + (e-s)/2;

            while( s<=e ){
                long long int square = mid*mid;
                
                if(square == n){
                    return mid;
                }
                
                if(square < n){
                     ans = mid;
                    s = mid + 1;
                }
                else {
                    e = mid - 1;                   
                }
                mid = s + (e-s)/2;
            }
            return ans;
        }

double morePricisionSqrt(int n, int p, int temp){
    double ans = temp;
    double factor = 1;

    for(int i=0; i<p; i++){
        factor = factor/10;
        
        for(double j = ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    
    return ans;
}

main(){
    // int arr[8]={7, 8, 9, 10, 6, 5, 4, 3};
    // int key;
    // cout<<"Enter Key to search"<<endl;
    // cin>>key;
    // cout<<" The Enterd index of key in array is= "<< binarySearch(arr, 8, key)+1;

// Question: First and Last Position of an Element in Shorted Array.

    // cout<<"the first Occ is = "<< firstOcc(arr, 8, key) << endl;
    // cout<<"the Last Occ is = "<< lastOcc(arr, 8, key) << endl;

// // Question: Find Pivot Element.
// int ans = getPivot(arr, 8);
// cout<<" The Pivot Element is = "<<ans<< endl;

// Question: Find the Peak  Elemnt of montain array.
        // int ans = findPeakElement(arr, 8);
        // cout<<" The ans Element is = "<<ans<< endl;

//Question: To find nearest intiger value near Square root of given number.

int n;
cout<<"enter Number to find Sqrt"<< endl;
cin>>n;

int tempSol = findSqrt(n);

double ans = morePricisionSqrt(n, 5, tempSol);

cout<<"Answer is = "<<ans<<endl; 

return 0;
}