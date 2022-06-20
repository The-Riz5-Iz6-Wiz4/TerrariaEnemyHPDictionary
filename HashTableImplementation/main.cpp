#include <cstdlib>
#include <iostream>
#include <string>
#include <chrono>

#include "hash.h"

using namespace std;

int main(int argc, char const *argv[])
{

hashADT TerrariaEnemyHPDictionary;

int choice;
bool runProgram = true;
string enemyName;
int maxHealthPoints;
int index;

TerrariaEnemyHPDictionary.insertItem("blood zombie",75);
TerrariaEnemyHPDictionary.insertItem("corrupt bunny", 70);
TerrariaEnemyHPDictionary.insertItem("corrupt goldfish", 100);
TerrariaEnemyHPDictionary.insertItem("corrupt penguin", 70);
TerrariaEnemyHPDictionary.insertItem("drippler", 50);
TerrariaEnemyHPDictionary.insertItem("the groom", 200);
TerrariaEnemyHPDictionary.insertItem("the bride", 200);
TerrariaEnemyHPDictionary.insertItem("angry bones", 80);
TerrariaEnemyHPDictionary.insertItem("anomura fungus", 230);
TerrariaEnemyHPDictionary.insertItem("antlion", 45);
TerrariaEnemyHPDictionary.insertItem("giant antlion charger", 110);
TerrariaEnemyHPDictionary.insertItem("antlion charger", 80);
TerrariaEnemyHPDictionary.insertItem("antlion larva", 35);
TerrariaEnemyHPDictionary.insertItem("antlion swarmer", 60);
TerrariaEnemyHPDictionary.insertItem("giant antlion swarmer", 90);
TerrariaEnemyHPDictionary.insertItem("baby slime", 30);
TerrariaEnemyHPDictionary.insertItem("bee", 20);
TerrariaEnemyHPDictionary.insertItem("black slime", 45);
TerrariaEnemyHPDictionary.insertItem("blazing wheel", 100);
TerrariaEnemyHPDictionary.insertItem("blood crawler", 60);
TerrariaEnemyHPDictionary.insertItem("blue jellyfish", 34);
TerrariaEnemyHPDictionary.insertItem("pink jellyfish", 70);
TerrariaEnemyHPDictionary.insertItem("blue slime", 25);
TerrariaEnemyHPDictionary.insertItem("bone serpent", 250);
TerrariaEnemyHPDictionary.insertItem("cave bat", 16);
TerrariaEnemyHPDictionary.insertItem("cochineal beetle", 40);
TerrariaEnemyHPDictionary.insertItem("crab", 40);
TerrariaEnemyHPDictionary.insertItem("crawdad", 50);
TerrariaEnemyHPDictionary.insertItem("crimera", 40);
TerrariaEnemyHPDictionary.insertItem("cursed skull", 40);
TerrariaEnemyHPDictionary.insertItem("cyan beetle", 40);
TerrariaEnemyHPDictionary.insertItem("dark caster", 50);
TerrariaEnemyHPDictionary.insertItem("demon", 120);
TerrariaEnemyHPDictionary.insertItem("demon eye", 60);
TerrariaEnemyHPDictionary.insertItem("devourer", 100);
TerrariaEnemyHPDictionary.insertItem("doctor bones", 500);
TerrariaEnemyHPDictionary.insertItem("dungeon guardian", 9999);
TerrariaEnemyHPDictionary.insertItem("dungeon slime", 150);
TerrariaEnemyHPDictionary.insertItem("eater of souls", 40);
TerrariaEnemyHPDictionary.insertItem("face monster", 70);
TerrariaEnemyHPDictionary.insertItem("fire imp", 70);
TerrariaEnemyHPDictionary.insertItem("frozen zombie", 50);
TerrariaEnemyHPDictionary.insertItem("fungi bulb", 90);
TerrariaEnemyHPDictionary.insertItem("ghost", 50);
TerrariaEnemyHPDictionary.insertItem("giant shelly", 50);
TerrariaEnemyHPDictionary.insertItem("giant worm", 30);
TerrariaEnemyHPDictionary.insertItem("gnome", 25);
TerrariaEnemyHPDictionary.insertItem("goblin scout", 80);
TerrariaEnemyHPDictionary.insertItem("granite elemental", 40);
TerrariaEnemyHPDictionary.insertItem("granite golem", 110);
TerrariaEnemyHPDictionary.insertItem("green slime", 14);
TerrariaEnemyHPDictionary.insertItem("harpy", 100);
TerrariaEnemyHPDictionary.insertItem("hellbat", 46);
TerrariaEnemyHPDictionary.insertItem("hoplite", 70);
TerrariaEnemyHPDictionary.insertItem("hornet", 48);
TerrariaEnemyHPDictionary.insertItem("ice bat", 30);
TerrariaEnemyHPDictionary.insertItem("ice slime", 30);
TerrariaEnemyHPDictionary.insertItem("jungle bat", 34);
TerrariaEnemyHPDictionary.insertItem("jungle slime", 60);
TerrariaEnemyHPDictionary.insertItem("lac beetle", 40);
TerrariaEnemyHPDictionary.insertItem("lava slime", 50);
TerrariaEnemyHPDictionary.insertItem("maggot zombie", 45);
TerrariaEnemyHPDictionary.insertItem("man eater", 110);
TerrariaEnemyHPDictionary.insertItem("meteor head", 26);
TerrariaEnemyHPDictionary.insertItem("mother slime", 90);
TerrariaEnemyHPDictionary.insertItem("mushi ladybug", 220);
TerrariaEnemyHPDictionary.insertItem("nymph", 300);
TerrariaEnemyHPDictionary.insertItem("lost girl", 250);
TerrariaEnemyHPDictionary.insertItem("pinky", 150);
TerrariaEnemyHPDictionary.insertItem("piranha", 30);
TerrariaEnemyHPDictionary.insertItem("purple slime", 40);
TerrariaEnemyHPDictionary.insertItem("raven", 35);
TerrariaEnemyHPDictionary.insertItem("red slime", 35);
TerrariaEnemyHPDictionary.insertItem("salamander", 65);
TerrariaEnemyHPDictionary.insertItem("sand slime", 50);
TerrariaEnemyHPDictionary.insertItem("sea snail", 40);
TerrariaEnemyHPDictionary.insertItem("shark", 300);
TerrariaEnemyHPDictionary.insertItem("skeleton", 60);
TerrariaEnemyHPDictionary.insertItem("snatcher", 60);
TerrariaEnemyHPDictionary.insertItem("snow flinx", 70);
TerrariaEnemyHPDictionary.insertItem("spike ball", 100);
TerrariaEnemyHPDictionary.insertItem("spiked ice slime", 60);
TerrariaEnemyHPDictionary.insertItem("spiked jungle slime", 65);
TerrariaEnemyHPDictionary.insertItem("spore bat", 16);
TerrariaEnemyHPDictionary.insertItem("spore skeleton", 60);
TerrariaEnemyHPDictionary.insertItem("spore zombie", 180);
TerrariaEnemyHPDictionary.insertItem("squid", 30);
TerrariaEnemyHPDictionary.insertItem("tim", 200);
TerrariaEnemyHPDictionary.insertItem("tomb crawler", 60);
TerrariaEnemyHPDictionary.insertItem("undead miner", 70);
TerrariaEnemyHPDictionary.insertItem("undead viking", 70);
TerrariaEnemyHPDictionary.insertItem("voodoo demon", 140);
TerrariaEnemyHPDictionary.insertItem("vulture", 40);
TerrariaEnemyHPDictionary.insertItem("wall creeper", 80);
TerrariaEnemyHPDictionary.insertItem("yellow slime", 45);
TerrariaEnemyHPDictionary.insertItem("zombie", 45);
TerrariaEnemyHPDictionary.insertItem("supreme calamitas", 1840000);
TerrariaEnemyHPDictionary.insertItem("swamp thing", 450);
TerrariaEnemyHPDictionary.insertItem("eyezor", 1000);
TerrariaEnemyHPDictionary.insertItem("reaper", 700);
TerrariaEnemyHPDictionary.insertItem("vampire", 750);


do {

    cout << "Pick what you'd like to do(input the integer)" << endl;
    cout << "1: insert enemy data" << endl;
    cout << "2: delete enemy data" << endl;
    cout << "3: update enemy max health" << endl;
    cout << "4: search for enemy max health" << endl;
    cout << "5: print the first item at every index" << endl;
    cout << "6: print all items at a chosen index" << endl;
    cout << "7: end program" << endl;

    cin >> choice;
    cin.ignore(); //cin.ignore is needed so getline ignores the enter_key that was pressed in cin >> choice. 
                  //getline is used below

    cout << endl;

    switch (choice) {
        case 1: //insertion
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            cout << endl;
            cout << "Please input enemy max health" << endl;
            cin >> maxHealthPoints;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.insertItem(enemyName, maxHealthPoints);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for insertion is(in nanoseconds)" << duration << endl;
            break;
        }
        case 2: //deletion
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.deleteItem(enemyName);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for deletion is(in nanoseconds)" << duration << endl;
            break;
        }
        case 3: //update
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            cout << endl;
            cout << "Please input enemy max health" << endl;
            cin >> maxHealthPoints;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.updateEnemyHP(enemyName, maxHealthPoints);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for updating entry is(in nanoseconds)" << duration << endl;
            break;
        }
        case 4: //search
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.searchEnemyHP(enemyName);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for searching is(in nanoseconds)" << duration << endl;
            break;
        }
        case 5: //print table
        {
            TerrariaEnemyHPDictionary.printHashTable();
            break;
        }
        case 6: //print index
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            index = TerrariaEnemyHPDictionary.HashFunction(enemyName);
            TerrariaEnemyHPDictionary.printItemsAtIndex(index);
            break;
        }
        case 7: // end program
            runProgram = false;
    } 
} while (runProgram);

    return 0;
}
