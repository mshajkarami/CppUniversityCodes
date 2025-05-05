#include <iostream>
#include <cmath> // for pow()

using namespace std;

int main() {
    double x;

    cout << "Please enter x: ";
    cin >> x; // get input from user

    double y = 1 / (pow(x, 2) + x + 3); // calculate y

    cout << "Number of y is: " << y << endl; // output the result

    return 0;
}
