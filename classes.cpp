#include <iostream>
#include <string>
using namespace std;

class Jovaun {
public:
    // --- Variables ---
    int happiness;
    int tiredness;
    int hoodieCount;
    bool listeningToVinyl;
    string shoes;
    string music;

    // --- Constructor ---
    Jovaun() {
        happiness = 70;       // starts out chill
        tiredness = 30;       // not too tired yet
        hoodieCount = 5;      // always black hoodies
        listeningToVinyl = false;
        shoes = "nothing";
        music = "nothing";
    }

    // --- Methods ---
    void putOnHoodie() {
        if (hoodieCount > 0) {
            cout << "Jovaun puts on a black hoodie. He looks cooler instantly.\n";
            hoodieCount -= 1;
            happiness += 5;
        }
        else {
            cout << "No hoodies left? Impossible!\n";
        }
    }

    void listenToVinyl() {
        listeningToVinyl = true;
        cout << "Spinning some vinyl... the vibes are immaculate.\n";
        happiness += 10;
        tiredness -= 5;
    }

    void codeSession() {
        cout << "Jovaun is coding like a boss.\n";
        happiness += 7;
        tiredness += 10;
    }

    void beatJaydenAtRainbowSix() {
        cout << "Jovaun beats Jayden at Rainbow Six. Again.\n";
        happiness += 15;
    }

    void shoechoice(string choice) {
        if (choice == "red") {
            cout << "Jovaun puts on his red shoes.\n";
            happiness += 5;
            shoes = "red";
        }
        else if (choice == "blue") {
            cout << "Jovaun puts on his blue shoes.\n";
            happiness += 8;
            shoes = "blue";
        }
        else if (choice == "green") {
            cout << "Jovaun puts on his green shoes\n";
            happiness += 4;
            shoes = "green";
        }
        else if (choice == "black") {
            cout << "Jovaun jumps up in joy and happily puts on his black shoes\n";
            happiness += 40;
            shoes = "black";
        }
    }
    void MusicChoice(string choice) {
        cout << "Jovaun puts on some " << choice << "\n";
        music = choice;
    }

    void printStats() {
        cout << "\n--- Jovaun's Status ---\n";
        cout << "Happiness: " << happiness << "\n";
        cout << "Tiredness: " << tiredness << "\n";
        cout << "Hoodies: " << hoodieCount << "\n";
        cout << "Listening to vinyl: " << (listeningToVinyl ? "Yes" : "No") << "\n";
        cout << "Shoe Color: " << shoes << "\n";
        cout << "Artist: " << music << "\n";
    }
};

class cat {
public:
    //local variables
    string color;
    int weight;
    int PowerLvl;
    bool aggresive;
    int hunger;
    string input;

    //Constructor
    cat() {
        color = "red";
        weight = 50;
        PowerLvl = 0;
        aggresive = false;
        hunger = 50;
        input = "blank";
    }

    void Quiz() {
        cout << "\n--- FIND WHAT CAT YOU ARE ---\n";
        cout << "What's your fav color?\n";
        cin >> input;
        color = input;
        cout << "Would you go around stealing cat food from other houses(yes/no)\n";
        cin >> input;
        if (input == "yes" || input == "Yes") {
            aggresive = true;
            weight += 50;
            PowerLvl += 100;
        }
        else {
            hunger += 10;
        }
    }
    void Answer() {
        cout << "\n--- YOUR CAT ---\n";
        cout << "Color: " << color << "\n";
        cout << "Weight: " << weight << "\n";
        cout << "Power Level: " << PowerLvl << "\n";
        cout << "Agressive: " << (aggresive ? "Yes" : "No") << "\n";
        cout << "Hunger: " << hunger << "\n";
    }
};

// --- Demo ---
int main() {
    Jovaun j;
    string choice = "potato";

    j.putOnHoodie();
    j.listenToVinyl();
    j.codeSession();
    j.beatJaydenAtRainbowSix();
    cout << "What color are you feeling today (red, blue, green, black).\n";
    cin >> choice;
    j.shoechoice(choice);
    cout << "Type a music artist's name.(DONT USE SPACES BETWEEN WORDS, EX. TYLERTHECREATOR).\n";
    cin >> choice;
    j.MusicChoice(choice);

    j.printStats();

    cat el;
    el.Quiz();
    el.Answer();

    return 0;
}
