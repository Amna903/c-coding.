
#include <iostream>
using namespace std;

string check(int x, int y, int h);

int main() {
    cout << "Enter height: ";
    int h;
    cin >> h;
    cout << "Enter x coordinate: ";
    int x;
    cin >> x;
    cout << "Enter y coordinate: ";
    int y;
    cin >> y;
    string result = check(x, y, h);
    cout << result;
}

string check(int x, int y, int h) {
    string res= "Outside";
    
    if ((0 <= x && x <= 3*h && 0 <= y && y <= h) || (h <= x && x <= 2*h && h <= y && y <= 4*h)) {
        if ((0 < x && x < 3*h && 0 < y && y < h) || (h < x && x < 2*h && h < y && y < 4*h)) {
            res= "Inside";
        } else {
            res= "Border";
        }
    } 
    return res;
}
