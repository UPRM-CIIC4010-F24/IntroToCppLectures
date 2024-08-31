#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int sideA, sideB, sideC;
    // Ask for sides
    cout << "What is side A?"; //printf
    cin >> sideA;
    cout<< "What is side B?";
    cin >> sideB;
    cout<< "What is side C?";
    cin >> sideC;

    cout << "Side A is " << sideA << " Side B is " << sideB << " Side C is " << sideC;

    // Calculate semi-perimeter
    float s = (sideA + sideB + sideC)/2;
    // Calculate area
    float area = sqrt(s*(s-sideA)*(s-sideB) * (s-sideC));

    cout << "\nThe area is: " << area;

    return 0;
}