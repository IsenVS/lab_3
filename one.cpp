#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double firstFragment(double x){
    double k = 2.0/1.0;
    double y = -k * (x + 7);
    if (abs(y) < 0.000001) y = 0.0;
    return y;
}
double secondFragment(double x){
    double y = sqrt(4 - (pow( x + 4, 2))) - 2;
    if (abs(y) < 0.000001) y = 0.0;
    return y;
}
double thirdFragment(double x){
    double y = log2f(2 + x);
    if (abs(y) < 0.000001) y = 0.0;
    return y;
}
double fourthFragment(double x){
    double y = sqrt(1 - (pow(x - 3, 2)));
    if (abs(y) < 0.000001) y = 0.0;
    return y;
}
double fifthFragment(double x){
    double y = 0 * x;
    if (abs(y) < 0.000001) y = 0.0;
    return y;
}

int main () {
    double xBegin = -7.0;
    double xEnd = 5.0;
    double dx = 0.1;
    cout << setw(10) << "X" << setw(10) << "Y" << endl;
    for (double x = xBegin; x <= xEnd; x += dx){
        if (abs(x) < 0.000001) x = 0.0;
        if (x >= xBegin and x < -6){
            double y = firstFragment(x);
            cout << setw(10) << x << "\t" << setw(10) << y << endl;
        }
        if (x >= -6 and x < -2){
            double y = secondFragment(x);
            cout << setw(10) << x << "\t" << setw(10) << y << endl;
        }
        if (x >= -2 and x < 2){
            double y = thirdFragment(x);
            cout << setw(10) << x << "\t" << setw(10) << y << endl;
        }
        if (x >= 2 and x < 4){
            double y = fourthFragment(x);
            cout << setw(10) << x << "\t" << setw(10) << y << endl;
        }
        if (x >= 4 and x < xEnd){
            double y = fifthFragment(x);
            cout << setw(10) << x << "\t" << setw(10) << y << endl;
        }
    }
}
