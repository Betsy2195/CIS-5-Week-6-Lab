#include <iostream>

// Lab 6 — Betsy Caudel
// CIS 5 Week 06 · Even and odd

using std::cout;
using std::cin;
using std::endl;
//using std::string; (Maybe use?)

int main() {
    //for loop will add even numbers from 0-100.
    for (int i=0; i<=100; i=i+2) {
    cout << i << " ";
    }
    cout << endl;

    //while loop will add odd numbers from 1-99.
    int x=1;
    while (x<=99) {
    cout << x << " ";

    // Adds 2 to only count odd numbers.
    x=x+2;
    } 
    cout << endl;

  return 0;
}
