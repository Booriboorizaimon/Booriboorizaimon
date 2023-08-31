#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "enter n:";
    cin >> n;
    if (n>51)
    {
        cout << (n-51)*3;
        return 0;
    }
    else {
        cout << 51-n;
        return 0;
    }
    return 0;
}