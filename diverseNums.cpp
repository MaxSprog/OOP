#include <iostream>
#include <algorithm>
#include <string>
#include <map>

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
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //cout << checknums(n, arr) << endl;
    string s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    map<char, string> let;
    for(int i = s1.length() - 1; i >= 0; i--){
        let[s3[i]] += "/" + s1[i] + s2[i] + ".";
        if(s1.length() - 1 - i > 0){
            let[s3[i]] += "/" + s1[i] + s2[i] + "..";
        }
    }
}
// 1 6 4 8 7 0 2 9 5 3