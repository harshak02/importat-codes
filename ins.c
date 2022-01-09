#include<stdio.h> 

void printArray(int n,int arr[]){

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void bubble(int n,int arr[]){

    for(int i =1 ;i<=n-1;i++){

        int j = i-1;
        int key;
        key = arr[i];

        while(j>=0 && arr[j]>key){

            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main(){
    
    int arr[] = {15,4,5,2,1,10};
    int n = 6;
    printArray(n,arr);
    bubble(n,arr);
    printArray(n,arr);


    return 0;
}
