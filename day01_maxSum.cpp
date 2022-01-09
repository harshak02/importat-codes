#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i =0;i<num;i++){
        int size;
        int k;
        cin>>size;
        cin>>k;
        int arr[size];

        for(int j =0;j<size;j++){
            cin>>arr[j];
        }

        for(int k = 0;k<size-1;k++){
            for(int l = 0;l<size-k-1;l++){
                if(arr[l]>arr[l+1]){
                    int temp;
                    temp = arr[l];
                    arr[l] = arr[l+1];
                    arr[l+1] = temp;
                }
            }
        }

        vector <int> vec1;
        int c = 0;

        for(int a = 0;a<k;a++){
            int temp1;
            temp1 = arr[size-a-1];

            for(int b = 0;b<size;b++){
                if(arr[b]==temp1){
                    vec1[c] = temp1;
                    c++;
                }
            }
        }

        int sum = 0;

        for(int i = 0;i<sizeof(vec1);i++){
            sum+=vec1[i];
        }

        cout<<sum<<endl;

    }

    return 0;
}
