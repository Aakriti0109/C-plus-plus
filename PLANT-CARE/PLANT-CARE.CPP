#include <iostream>
using namespace std;

class JadePlant {
private:
    int waterLevel;
    int sunlightHours;
    int health;

public:
    // Constructor
    JadePlant() {
        waterLevel = 50;
        sunlightHours = 4;
        health = 80;
    }

    void waterPlant(int amount) {
        waterLevel += amount;
        if (waterLevel > 100) waterLevel = 100;

        if (waterLevel > 80) {
            health -= 10;
            cout << "Warning: Overwatering!\n";
        } else {
            health += 5;
        }
    }

    void setSunlight(int hours) {
        sunlightHours = hours;

        if (sunlightHours < 3) {
            health -= 10;
            cout << "Not enough sunlight!\n";
        } else if (sunlightHours > 8) {
            health -= 5;
            cout << "Too much harsh sunlight!\n";
        } else {
            health += 5;
        }
    }

    void shock() {
        health -= 20;
        waterLevel -= 10;
        cout << "Plant experienced shock!\n";
    }

    void displayStatus() {
        cout << "\n--- Jade Plant Status ---\n";
        cout << "Water Level: " << waterLevel << endl;
        cout << "Sunlight Hours: " << sunlightHours << endl;
        cout << "Health: " << health << endl;

        if (health < 50)
            cout << "Plant is weak (yellow leaves, shedding)\n";
        else
            cout << "Plant is healthy\n";
    }
};

int main() {
    JadePlant plant;

    int water, sunlight, choice;

    cout << "Did the plant fall? (1 = Yes, 0 = No): ";
    cin >> choice;

    if (choice == 1) {
        plant.shock();
    }

    cout << "Enter amount of water to give (0-100): ";
    cin >> water;
    plant.waterPlant(water);

    cout << "Enter sunlight hours per day: ";
    cin >> sunlight;
    plant.setSunlight(sunlight);

    plant.displayStatus();

    return 0;
}