#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int ans;

    cout << "Q1: Capital of India?\n1. Delhi\n2. Mumbai\n";
    cin >> ans;
    if (ans == 1) score++;

    cout << "Q2: 2 + 2 = ?\n1. 3\n2. 4\n";
    cin >> ans;
    if (ans == 2) score++;

    cout << "Q3: C++ is?\n1. Language\n2. OS\n";
    cin >> ans;
    if (ans == 1) score++;

    cout << "\nYour Score: " << score << "/3\n";

    return 0;
}