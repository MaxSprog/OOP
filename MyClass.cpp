#include <iostream>

using namespace std;

class A{
    private:
        int sz;
        double *p;

    public:
        A(int sz_){
            sz = sz_;
            p = new double[sz];
        }
        ~A(){delete[] p;}
        int size(){return sz;}
        double& operator[](int i){return p[i];}
        void resize(int sz_){
            double *tmp = new double[sz_];
            for(int i = 0; i < sz_; i++){
                tmp[i] = sz > i ? p[i] : 0;
            }
            delete[] p;
            p = tmp;
            sz = sz_;
        }
        void put(double v){
            resize(sz+1);
            p[sz - 1] = v;
        }

};

int main(){
    A a(15);
    for(int i = 0; i < a.size(); i++){
        cin >> a[i];
    }
    a.put(33);
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
}