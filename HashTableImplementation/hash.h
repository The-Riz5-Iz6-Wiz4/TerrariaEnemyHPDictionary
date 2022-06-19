#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef HASH_H
#define HASH_H

class hashADT
{
    private:

        static const int hashTableSize = 139;

        struct enemy 
        {
            string enemyName;
            int maxHealthPoints;
            enemy* next;
        };

        enemy* HashTable[hashTableSize];

    public:

        hashADT();
        int HashFunction(string key);
        void insertItem(string enemyName, int maxHealthPoints);
        int numOfItemsAtIndex(int index);
        void printHashTable();
        void printItemsAtIndex(int index);
        void searchEnemyHP(string enemyName);
        void deleteItem(string enemyName);
        void updateEnemyHP(string enemyName, int maxHealthPoints);
};

#endif