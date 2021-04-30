#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool checknums(int n, int* arr){
    if(n > 10)
        return false;
    bool* check = new bool[n];
    for(int i = 0; i < n; i++){
        check[i] = false;
    }
    for(int i = 0; i < n; i++){
        if(check[arr[i]]){
            return false;
        }
        else{
            check[arr[i]] = true;
        }
    }
    return true;
}

int main(){
    vector<int> nums;
    int* arr1[5], arr2[10];
    for(int i = 10000; i < 100000; i++){
        for(int j = 0; j < 5; j++){
            arr1[j] = i / (int)pow(10, 4 - j) % 10;
        }
        int k = i*i;
        for(int j = 0; j < 10; j++){
            arr2[j] = k / (int)pow(10, 9 - j) % 10;
        }
        if()
    }
}