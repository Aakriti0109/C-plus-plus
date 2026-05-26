#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of data words: ";
    cin >> n;

    int data[n];
    int sum = 0;

    cout << "Enter data words in decimal: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        sum += data[i];
    }

    // Assume 8-bit checksum
    while (sum > 255) {
        sum = (sum & 255) + (sum >> 8);
    }

    int checksum = ~sum & 255;

    cout << "\nChecksum = " << checksum << endl;

    int receiverSum = sum + checksum;

    while (receiverSum > 255) {
        receiverSum = (receiverSum & 255) + (receiverSum >> 8);
    }

    int result = ~receiverSum & 255;

    if (result == 0)
        cout << "No error detected." << endl;
    else
        cout << "Error detected." << endl;

    return 0;
