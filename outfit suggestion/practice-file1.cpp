#include <iostream>
using namespace std;

int main() {
    int weather, occasion;

    cout << "=== Outfit Suggestion Program ===\n\n";

    cout << "Select Weather:\n";
    cout << "1. Hot\n2. Cold\n3. Rainy\n";
    cout << "Enter choice: ";
    cin >> weather;

    cout << "\nSelect Occasion:\n";
    cout << "1. Casual\n2. Party\n3. Office\n";
    cout << "Enter choice: ";
    cin >> occasion;

    cout << "\nSuggested Outfit:\n";

    if (weather == 1) { 
        if (occasion == 1)
            cout << "Light t-shirt with shorts and sneakers.\n";
        else if (occasion == 2)
            cout << "Sleeveless dress with sandals.\n";
        else if (occasion == 3)
            cout << "Cotton top with formal pants.\n";
    }
    else if (weather == 2) { 
        if (occasion == 1)
            cout << "Sweater with jeans and boots.\n";
        else if (occasion == 2)
            cout << "Stylish coat with a dress and heels.\n";
        else if (occasion == 3)
            cout << "Blazer with trousers and closed shoes.\n";
    }
    else if (weather == 3) { 
        if (occasion == 1)
            cout << "Comfortable top with jeans and waterproof shoes.\n";
        else if (occasion == 2)
            cout << "Knee-length dress with a light jacket.\n";
        else if (occasion == 3)
            cout << "Formal wear with a raincoat and flats.\n";
    }
    else {
        cout << "Invalid weather choice.\n";
    }

    cout << "\n Reste stylee! \n";

    return 0;
}