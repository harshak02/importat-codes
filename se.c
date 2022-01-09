#include<stdio.h> 

void printArray(int n,int arr[]){

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void bubble(int n,int arr[]){

    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){

            if(arr[i]>arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
