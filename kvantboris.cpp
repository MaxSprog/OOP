#include <iostream>

using namespace std;

int main(){
    bool f;
    for(int i = 1; i <= 999; i++){
        for(int a = 1; a <= 9; a++){
            for(int b = 0; b <= 9; b++){
                for(int c = 0; c <= 9; c++){
                    if((a * 100 + b * 10 + c) % i == 0){
                        if((b * 100 + c * 10 + a) % i == 0 && (c * 100 + a * 10 + b) % i == 0){
                            f = 1;
                        }
                        else{
                            f = 0;
                            a = 10; b = 10; c = 10;
                        }
                    }
                }
            }
        }
        if(f) cout << i << endl;
    }
}