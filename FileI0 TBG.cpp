#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int room = 0;   // 0,1,2 = three rooms
    int hp = 100;
    int money = 0;
    string inventory[6];
    char ans;

    // -------- LOAD OR NEW ----------
    cout << "Load game from file? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') {
        ifstream in("save.txt");
        if (in) {
            in >> room >> hp >> money >> inventory[0] >> inventory[1] >> inventory[2] >> inventory[3] >> inventory[4] >> inventory[5];
            cout << "Loaded. Room=" << room << " HP=" << hp << " Money=" << money <<"\n";
            for (int i = 0; i < 5; i++) {
                cout << inventory[i] << " " << "\n";
            }
        }
        else {
            cout << "No save found. Starting new.\n";
        }
    }

    bool running = true;
    while (running) {
        cout << "\n------------------------------\n";
        cout << "HP: " << hp << " | Room: " << room << " | Money: " << money << "\n";
        for (int i = 0; i < 6; i++) {
            cout << inventory[i] << " " << "\n";
        }

        switch (room) {
        case 0:
            cout << "Room 0: A quiet hallway. (+2 HP)\n";
            hp += 2; if (hp > 100) hp = 100;
            cout << "Options: (e = east to Room 1, q = quit)\n";
            cin >> ans;
            if (ans == 'e') room = 1;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;

        case 1:
            cout << "Room 1: A dusty library. Sneeze! (-3 HP)\n";
            hp -= 3;
            cout << "Options: (w = west to Room 0, e = east to Room 2, q = quit)\n";
            cin >> ans;
            if (ans == 'w') room = 0;
            else if (ans == 'e') room = 2;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;

        case 2:
            cout << "Room 2: A cold cellar. Brrr… (-5 HP)\n";
            hp -= 5;
            cout << "Options: (w = west to Room 1, s = south to room 3, n = north to room 4, q = quit)\n";
            cin >> ans;
            if (ans == 'w') room = 1;
            if (ans == 's') room = 3;
            if (ans == 'n') room = 4;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;
        case 3:
            cout << "Room 3: a bird throws up on you (-10 hp) but the throw up consisted of 3 20$ bills (+$60)\n";
            hp -= 10;
            cout << "Options: (n = north to room 2, q = quit\n";
            cin >> ans;
            if (ans == 'n') room = 2;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;
        case 4:
            cout << "Room 4: You enter a pink garden and the pink trees heal you (+15 HP)\n";
            hp += 15;
            cout << "Options: (n = north to room 5, s = south to room 2, q = quit)\n";
            cin >> ans;
            if (ans == 'n') room = 5;
            if (ans == 's') room = 2;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;
        case 5:
            cout << "Room 5: You enter a weapons room with lots of swords, bows, and axes. Choose One!\n";
            cout << "Options: (s = sword, a = axe, b = bow)\n";
            cin >> ans;
            if (ans == 's') inventory[0] = "sword"; cout << "You picked up the sword\n";
            if (ans == 'a') inventory[0] = "axe"; cout << "You picked up the axe\n";
            if (ans == 'b') inventory[0] = "bow"; inventory[1] = "arrow"; cout << "You picked up the bow but find there is onlt one arrow with it. \n";
            cout << "Options: (e = east to room 6, s = south to room 4, q = quit)\n";
            cin >> ans;
            if (ans == 'e') room = 6;
            if (ans == 's') room = 4;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;
        case 6:
            cout << "Room 6: You encounter a undead skeleton with gold armor across the hallway.\n";
            if (inventory[0] == "sword") {
                cout << "You run at it while yelling. I turns to you surprised and gets ready to stab you but you attack faster and slice it's head off. It's bones turn into smoke but It drops a gold helmet\n";
                inventory[1] = "GoldHelmet";
            }
            else if (inventory[0] == "axe") {
                cout << "You try to sneak closer to it before it notices you but your axe scrapes agaisnt the ground and alarms the skeleton.\n";
                cout << "It shoots a arrow at you but you block it with the side of your axe. You swing your axe violently and slice through it's body. It drops a Gold Chestplate\n";
                inventory[1] = "GoldChestplate";
            }
            else if (inventory[0] == "bow") {
                cout << "You see that it has it's back turned to you and immedietly aim at it's head with your only arrow. It connects and the skeleton dies. It drops a quill of 100 arrows\n";
                inventory[1] = "Arrows";
            }
            cout << "Options: (e = east to room 7, w = west to room 5)\n";
            cin >> ans;
            if (ans == 'e') room = 7;
            if (ans == 'w') room = 5;
            else if (ans == 'q') running = false;
            else cout << "Invalid move.\n";
            break;
        }

        if (hp <= 0) {
            cout << "You fainted! Game over.\n";
            running = false;
        }
    }

    // -------- SAVE ----------
    ofstream out("save.txt");
    if (out) {
        out << room << " " << hp << " " << money << "\n";
        for (int i = 0; i < 6; i++) {
            out << inventory[i] << " " << "\n";
        }
        cout << "Game saved (room=" << room << ", hp=" << hp << ", money=" << money <<")\n";
        for (int i = 0; i < 6; i++) {
            cout << inventory[i] << " " << "\n";
        }
    }
    cout << "Goodbye!\n";
    return 0;
}
