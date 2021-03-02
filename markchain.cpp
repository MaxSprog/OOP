#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <time.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    vector<string> v1, v2, v3;
    string s1, s2, s3;
    ifstream fi("codex.txt");
    ofstream fo("outtext.txt");
    fi >> s1 >> s2;
    while(fi >> s3){
        v1.push_back(s1);
        v2.push_back(s2);
        v3.push_back(s3);
        s1 = s2;
        s2 = s3;
    }/*
    for(int i = 0; i < 20; i++){
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }*/
    vector<string> base, newtext;
    s1 = v1[0];
    s2 = v2[0];
    fo << s1 << " " << s2 << " ";
    for(int i = 0; i < 10000; i++){
        for(int j = 0; j < v1.size(); j++){
            if(v1[j] == s1 && v2[j] == s2){
                base.push_back(v3[j]);
            }
        }
        if(base.size() == 0){
            break;
        }
        fo << base[rand() % base.size()] << " ";
        base.clear();
        s1 = v1[i];
        s2 = v2[i];
    }
}