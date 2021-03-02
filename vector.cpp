#include <iostream>
#include <vector>

using namespace std;

int main(){
    double tmp;
    vector <double> v;
    while(cin >> tmp){
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}