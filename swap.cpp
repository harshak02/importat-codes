#include<iostream>
using namespace std;

class swaper{

    public :

    void swapkth(int n,int *ptr,int k){

        int temp;
        temp = *(ptr+k-1);
        *(ptr+k-1) = *(ptr+n-k-1);
        *(ptr+n-k-1) = temp;
        
    }

};

int main(){

    swaper harsha;
    int k;
    int no_of_elements;
    no_of_elements = 5;
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    cout<<"Enter the value of k\n"<<endl;
    cin>>k;
    harsha.swapkth(no_of_elements,ptr,k);
    cout<<"The changed array is :\n"<<endl;
    
    for(int i = 0;i<no_of_elements;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}
