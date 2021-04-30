#include <iostream>

using namespace std;

class R{
    public:
        int x, y;
        R(int x = 0, int y = 1):x(x),y(y){}
};

ostream& operator<<(ostream& out, const R& r){
    if(r.x % r.y == 0){
        out << r.x / r.y;
    }
    else{
        out << r.x << "/" << r.y;
    }
    return out;
}

istream& operator>>(istream& in, R& r){
    char buf;
    in >> r.x >> buf >> r.y;
    return in;
}

R operator*(const R& r1, const R& r2){
    return R(r1.x * r2.x, r1.y * r2.y);
}

R operator/(const R& r1, const R& r2){
    return R(r1.x * r2.y, r1.y * r2.x);
}

R operator+(const R& r1, const R& r2){
    return R(r1.x*r2.y + r2.x*r1.y, r1.y*r2.y);
}

R operator-(const R& r1, const R& r2){
    return R(r1.x*r2.y - r2.x*r1.y, r1.y*r2.y);
}

//R operator<

int main(){
    R r1, r2;
    cin >> r1 >> r2;
    cout << r1 / r2;
}