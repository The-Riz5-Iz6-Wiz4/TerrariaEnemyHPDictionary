#include <cstdlib>
#include <iostream>
#include <chrono>
#include <ctime>
#include <random>
#include "LL.h"

using namespace std;

int main(int argc, char** argv)
{
    LinkedList TerrariaEnemyHPDictionary;

    int choice;
    bool runProgram = true;
    string enemyName;
    int maxHealthPoints;
    int indexNum;

    srand((unsigned) time(0));

TerrariaEnemyHPDictionary.addNode("blood zombie",75);
TerrariaEnemyHPDictionary.addNode("corrupt bunny", 70);
TerrariaEnemyHPDictionary.addNode("corrupt goldfish", 100);
TerrariaEnemyHPDictionary.addNode("corrupt penguin", 70);
TerrariaEnemyHPDictionary.addNode("drippler", 50);
TerrariaEnemyHPDictionary.addNode("the groom", 200);
TerrariaEnemyHPDictionary.addNode("the bride", 200);
TerrariaEnemyHPDictionary.addNode("angry bones", 80);
TerrariaEnemyHPDictionary.addNode("anomura fungus", 230);
TerrariaEnemyHPDictionary.addNode("antlion", 45);
TerrariaEnemyHPDictionary.addNode("giant antlion charger", 110);
TerrariaEnemyHPDictionary.addNode("antlion charger", 80);
TerrariaEnemyHPDictionary.addNode("antlion larva", 35);
TerrariaEnemyHPDictionary.addNode("antlion swarmer", 60);
TerrariaEnemyHPDictionary.addNode("giant antlion swarmer", 90);
TerrariaEnemyHPDictionary.addNode("baby slime", 30);
TerrariaEnemyHPDictionary.addNode("bee", 20);
TerrariaEnemyHPDictionary.addNode("black slime", 45);
TerrariaEnemyHPDictionary.addNode("blazing wheel", 100);
TerrariaEnemyHPDictionary.addNode("blood crawler", 60);
TerrariaEnemyHPDictionary.addNode("blue jellyfish", 34);
TerrariaEnemyHPDictionary.addNode("pink jellyfish", 70);
TerrariaEnemyHPDictionary.addNode("blue slime", 25);
TerrariaEnemyHPDictionary.addNode("bone serpent", 250);
TerrariaEnemyHPDictionary.addNode("cave bat", 16);
TerrariaEnemyHPDictionary.addNode("cochineal beetle", 40);
TerrariaEnemyHPDictionary.addNode("crab", 40);
TerrariaEnemyHPDictionary.addNode("crawdad", 50);
TerrariaEnemyHPDictionary.addNode("crimera", 40);
TerrariaEnemyHPDictionary.addNode("cursed skull", 40);
TerrariaEnemyHPDictionary.addNode("cyan beetle", 40);
TerrariaEnemyHPDictionary.addNode("dark caster", 50);
TerrariaEnemyHPDictionary.addNode("demon", 120);
TerrariaEnemyHPDictionary.addNode("demon eye", 60);
TerrariaEnemyHPDictionary.addNode("devourer", 100);
TerrariaEnemyHPDictionary.addNode("doctor bones", 500);
TerrariaEnemyHPDictionary.addNode("dungeon guardian", 9999);
TerrariaEnemyHPDictionary.addNode("dungeon slime", 150);
TerrariaEnemyHPDictionary.addNode("eater of souls", 40);
TerrariaEnemyHPDictionary.addNode("face monster", 70);
TerrariaEnemyHPDictionary.addNode("fire imp", 70);
TerrariaEnemyHPDictionary.addNode("frozen zombie", 50);
TerrariaEnemyHPDictionary.addNode("fungi bulb", 90);
TerrariaEnemyHPDictionary.addNode("ghost", 50);
TerrariaEnemyHPDictionary.addNode("giant shelly", 50);
TerrariaEnemyHPDictionary.addNode("giant worm", 30);
TerrariaEnemyHPDictionary.addNode("gnome", 25);
TerrariaEnemyHPDictionary.addNode("goblin scout", 80);
TerrariaEnemyHPDictionary.addNode("granite elemental", 40);
TerrariaEnemyHPDictionary.addNode("granite golem", 110);
TerrariaEnemyHPDictionary.addNode("green slime", 14);
TerrariaEnemyHPDictionary.addNode("harpy", 100);
TerrariaEnemyHPDictionary.addNode("hellbat", 46);
TerrariaEnemyHPDictionary.addNode("hoplite", 70);
TerrariaEnemyHPDictionary.addNode("hornet", 48);
TerrariaEnemyHPDictionary.addNode("ice bat", 30);
TerrariaEnemyHPDictionary.addNode("ice slime", 30);
TerrariaEnemyHPDictionary.addNode("jungle bat", 34);
TerrariaEnemyHPDictionary.addNode("jungle slime", 60);
TerrariaEnemyHPDictionary.addNode("lac beetle", 40);
TerrariaEnemyHPDictionary.addNode("lava slime", 50);
TerrariaEnemyHPDictionary.addNode("maggot zombie", 45);
TerrariaEnemyHPDictionary.addNode("man eater", 110);
TerrariaEnemyHPDictionary.addNode("meteor head", 26);
TerrariaEnemyHPDictionary.addNode("mother slime", 90);
TerrariaEnemyHPDictionary.addNode("mushi ladybug", 220);
TerrariaEnemyHPDictionary.addNode("nymph", 300);
TerrariaEnemyHPDictionary.addNode("lost girl", 250);
TerrariaEnemyHPDictionary.addNode("pinky", 150);
TerrariaEnemyHPDictionary.addNode("piranha", 30);
TerrariaEnemyHPDictionary.addNode("purple slime", 40);
TerrariaEnemyHPDictionary.addNode("raven", 35);
TerrariaEnemyHPDictionary.addNode("red slime", 35);
TerrariaEnemyHPDictionary.addNode("salamander", 65);
TerrariaEnemyHPDictionary.addNode("sand slime", 50);
TerrariaEnemyHPDictionary.addNode("sea snail", 40);
TerrariaEnemyHPDictionary.addNode("shark", 300);
TerrariaEnemyHPDictionary.addNode("skeleton", 60);
TerrariaEnemyHPDictionary.addNode("snatcher", 60);
TerrariaEnemyHPDictionary.addNode("snow flinx", 70);
TerrariaEnemyHPDictionary.addNode("spike ball", 100);
TerrariaEnemyHPDictionary.addNode("spiked ice slime", 60);
TerrariaEnemyHPDictionary.addNode("spiked jungle slime", 65);
TerrariaEnemyHPDictionary.addNode("spore bat", 16);
TerrariaEnemyHPDictionary.addNode("spore skeleton", 60);
TerrariaEnemyHPDictionary.addNode("spore zombie", 180);
TerrariaEnemyHPDictionary.addNode("squid", 30);
TerrariaEnemyHPDictionary.addNode("tim", 200);
TerrariaEnemyHPDictionary.addNode("tomb crawler", 60);
TerrariaEnemyHPDictionary.addNode("undead miner", 70);
TerrariaEnemyHPDictionary.addNode("undead viking", 70);
TerrariaEnemyHPDictionary.addNode("voodoo demon", 140);
TerrariaEnemyHPDictionary.addNode("vulture", 40);
TerrariaEnemyHPDictionary.addNode("wall creeper", 80);
TerrariaEnemyHPDictionary.addNode("yellow slime", 45);
TerrariaEnemyHPDictionary.addNode("zombie", 45);
TerrariaEnemyHPDictionary.addNode("supreme calamitas", 1840000);
TerrariaEnemyHPDictionary.addNode("swamp thing", 450);
TerrariaEnemyHPDictionary.addNode("eyezor", 1000);
TerrariaEnemyHPDictionary.addNode("reaper", 700);
TerrariaEnemyHPDictionary.addNode("vampire", 750);

//random string generator to populate the dataset for testing
for (int i = 0; i < 900; i++)
{
    int length = (rand()%20) + 2;

    const string alphabet = ("abcdefghijklmnopqrstuvwxyz");
    string result;
    result.resize(length);

    for (int i=0; i < length; i++)
    {
        result[i] = alphabet[rand() % alphabet.length()];
    }
    
    TerrariaEnemyHPDictionary.addNode(result, 1);
}


do {

    cout << "Pick what you'd like to do(input the integer)" << endl;
    cout << "1: insert enemy data" << endl;
    cout << "2: delete enemy data" << endl;
    cout << "3: search for enemy max health" << endl;
    cout << "4: update enemy max health" << endl;
    cout << "5: Search for enemy max heallth via index" << endl;
    cout << "6: print the Linked List" << endl;
    cout << "7: end program" << endl;

    cin >> choice;
    cin.ignore();

    cout << endl;

    switch (choice) 
    {
        case 1: //insertion
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            cout << endl;
            cout << "Please input enemy max health" << endl;
            cin >> maxHealthPoints;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.addNode(enemyName, maxHealthPoints);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for insertion is(in nanoseconds)" << duration << endl;
            break;
        }
        case 2: //delete
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            cout << endl;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.deleteNode(enemyName);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for deleting is(in nanoseconds)" << duration << endl;
            break;
        }
        case 3: //search by name
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            cout << endl;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.searchEnemy(enemyName);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for search is(in nanoseconds)" << duration << endl;
            break;
        }
         case 4: //update
        {
            cout << "Please input enemy name" << endl;
            getline(cin, enemyName);
            cout << endl;
            cout << "Please input enemy max health" << endl;
            cin >> maxHealthPoints;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.updateEnemy(enemyName, maxHealthPoints);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for update is(in nanoseconds)" << duration << endl;
            break;
        }
        case 5: //search by index
        {
            cout << "Please input index to search" << endl;
            cin >> indexNum;
            cout << endl;

            auto start = chrono::high_resolution_clock::now();

            TerrariaEnemyHPDictionary.searchByIndex(indexNum);

            auto end = chrono::high_resolution_clock::now();
            auto duration = double(std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count());

            cout << "Runtime for search is(in nanoseconds)" << duration << endl;
            break;
        }
        case 6: //print 
        {
            TerrariaEnemyHPDictionary.printLL();
            break;
        }
        case 7: //end program
        {
            runProgram = false;
            break;
        }
    }
} while (runProgram);

    return 0;
}