#include<stdio.h> 

void bubble(int n,int m,int arr[]){

    int high,low,mid;
    high = n-1;
    low = 0;
    int result = -1;

    while(low<=high){

        mid = (high+low)/2;

        if(m==arr[mid]){
            result = mid;
        } 

        else if(m<arr[mid]){
            high = mid-1;
        }

        else{
            low = mid+1;
        }
    }

    printf("%d",result);
}

int main(){
    
    int arr[] = {1,2,3,4,5,10};
    int n = 6;
    int m = 10;

    bubble(n,m,arr);



    return 0;
}
