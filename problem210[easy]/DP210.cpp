#include<iostream>

using namespace std;

int main(){
    unsigned int x, y;

    cin >> x >> y;

    int mask = 1;
    int matches = 0;

    for(int i = 0; i < 32; ++i){
        if( (x & mask) == (y & mask) ){
            matches++;
        }
        mask = mask << 2;
    }

    cout << (static_cast<double>(matches) / 32.0f) * 100.0 << "% compatablility" << endl;
    cout << x << " should avoid " << ~x << endl;
    cout << y << " should avoid " << ~y << endl;

    return 0;
}
