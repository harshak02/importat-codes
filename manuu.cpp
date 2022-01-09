#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector <int> double_elements(vector <int> vec1){

    vector <int> result;

    int len = vec1.size();

    for(int i = 0;i<len;i++){
        int temp;
        temp = vec1[i];
        temp = temp *2;
        result.push_back(temp);

    }
    
    return result;
}

int main(){

    int arr[100];
    char str[100];

    vector <int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    vec1.push_back(40);
    vec1.push_back(50);

    int len = vec1.size();

    for(int i = 0;i<len;i++){
        cout<<vec1[i]<<endl;
    }

    // vec1.pop_back();

    // len = vec1.size();

    // for(int i = 0;i<len;i++){
    //     cout<<vec1[i]<<endl;
    // }

    vector <int> res;

    res = double_elements(vec1);

    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<endl;
    }

    return 0;
}
