#include<iostream>
using namespace std;

int temp = 0;

int chksort(int arr[],int n){
    int result;
    
    if(n==1){
        result = 1;
        return result;
    }
    
    if(arr[0]>arr[1]){
        result = 0;
        return 0;
    }
    
    return chksort(arr+1,n-1);
    
}

int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,5,4};

    int result;
    result = chksort(arr,n);
    int result2;
    result2 = chksort(arr2,n);

    if(result==1){
        cout<<"sorted array"<<endl;
    }

    else{
        cout<<"unsorted array"<<endl;
    }

    if(result2==1){
        cout<<"sorted array"<<endl;
    }

    else{
        cout<<"unsorted array"<<endl;
    }

    return 0;
}
