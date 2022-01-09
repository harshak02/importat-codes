#include<stdio.h> 

void printArray(int n,int arr[]){

    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}

void bubble(int n,int arr[]){

    int j =0;

    for(int i = 0;i<n-1;i++){
        
        j++;

        for(int j = 0;j<n-1-i;j++){
            
            if(arr[j]>arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
