#include <cstdlib>
#include <iostream>
#include <string>
#include <random>

#include "hash.h"

using namespace std;


//Method that initializes and constructs the hashtable
//fills every index with an enemy with name and HP "n/a"
//points to nullptr to be used later in linked lists as collision resolution
hashADT::hashADT()
{
    for (int i = 0; i < hashTableSize; i++)
    {

        HashTable[i] = new enemy;
        HashTable[i]->enemyName = "n/a";
        HashTable[i]->maxHealthPoints = 0;
        HashTable[i]->next = nullptr;

    }
}

//Hash function method that takes the length of a string and converts the characters to ascii code
//and sums the ascii value of every character in the string
//This specific hash function has time complexity of O(n) because of the for loop
//Where n is equal to the number of characters in the key.
int hashADT::HashFunction(string key) 
{
    int hashSum = 0;
    int index;

    for (int i = 0; i < key.length()/2; i++)
    {
        hashSum = hashSum + (int)key[i];
    }

    index = hashSum % hashTableSize;

    return index;
}

//method to insert an item, includes linked list collision resolution
void hashADT::insertItem(string enemyName, int maxHealthPoints)
{
    int index = HashFunction(enemyName);
    //replaces the value at index if its key is n/a
    if(HashTable[index]->enemyName == "n/a")
    {

        HashTable[index]->enemyName = enemyName;
        HashTable[index]->maxHealthPoints = maxHealthPoints;

    }
    else //otherwise traverses to the end of the list and links the item
    {    //to the new created item that newEnemy points to

        enemy* ptr = HashTable[index];
        enemy* newEnemy = new enemy;
        newEnemy->enemyName = enemyName;
        newEnemy->maxHealthPoints = maxHealthPoints;
        newEnemy->next = nullptr;

        while (ptr->next != nullptr) //traverses to end of linked list
        {
            ptr = ptr->next;
        }

        ptr->next = newEnemy; //links the list
    }
}

//method to search an enemies name and will tell you the enemies HP data
void hashADT::searchEnemyHP(string enemyName)
{
    int index = HashFunction(enemyName);
    bool foundEnemy = false;
    int maxHealthPoints;

    enemy* ptr = HashTable[index];

    while(ptr != nullptr) //while loop that goes through items at an index in case the enemy isn't the first item
    {
        if(ptr->enemyName == enemyName)
        {
            foundEnemy = true;
            maxHealthPoints = ptr->maxHealthPoints;
        }

        ptr = ptr->next;
    }

    if(foundEnemy == true)
    {
        cout << "The max health points of " << enemyName << " is " << maxHealthPoints << endl;
    }
    else
    {
        cout << "The enemy you are searching for does not exist in the hash table\n";
    }

}


//method to delete an item
void hashADT::deleteItem(string enemyName)
{
    int index = HashFunction(enemyName);

    enemy* delPtr;
    enemy* ptr1;
    enemy* ptr2;

    //if index has no enemyName, but "n/a"
    if (HashTable[index]->enemyName == "n/a")
    {
        cout << enemyName << "does not exist inside the hash table";
    }

    //if only one item, and there is a match to enemyName
    else if (HashTable[index]->enemyName == enemyName && HashTable[index]->next == nullptr)
    {
        delPtr = HashTable[index];

        delete delPtr;
    }
    
    //if a match exists as the first item in an index with many items
    else if (HashTable[index]->enemyName == enemyName)
    {
        delPtr = HashTable[index];
        HashTable[index] = HashTable[index]->next;

        delete delPtr;

        cout << enemyName << " has been deleted from the Hash Table\n";
    }
    
    //if an index has several items and the match is not the first item
    else
    {
        ptr1 = HashTable[index]->next;
        ptr2 = HashTable[index];

        while(ptr1 != nullptr && ptr1->enemyName != enemyName)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }

        //if an index has several items, and no matches
        if(ptr1 == nullptr)
        {
            cout << enemyName << "does not exist inside the hash table";
        }
        else //if an index has several items, and a match that isn't the first item
        {
            delPtr = ptr1;
            ptr1 = ptr1->next;
            ptr2->next = ptr1;

            delete delPtr;

            cout << enemyName << " has been deleted from the Hash Table\n";
        }
    }
    
}

void hashADT::updateEnemyHP(string enemyName, int maxHealthPoints)
{
    int index = HashFunction(enemyName);

    enemy* setPtr;
    enemy* ptr1;
    enemy* ptr2;

    //if index has no enemyName, but "n/a"
    if (HashTable[index]->enemyName == "n/a")
    {
        setPtr = HashTable[index];

        setPtr->enemyName = enemyName;
        setPtr->maxHealthPoints = maxHealthPoints;
    }

    //if only one item, and there is a match to enemyName
    else if (HashTable[index]->enemyName == enemyName && HashTable[index]->next == nullptr)
    {
        setPtr = HashTable[index];

        setPtr->enemyName = enemyName;
        setPtr->maxHealthPoints = maxHealthPoints;
    }
    
    //if a match exists as the first item in an index with many items
    else if (HashTable[index]->enemyName == enemyName)
    {
        setPtr = HashTable[index];
        HashTable[index] = HashTable[index]->next;

        setPtr->enemyName = enemyName;
        setPtr->maxHealthPoints = maxHealthPoints;
    }
    
    //if an index has several items and the match is not the first item
    else
    {
        ptr1 = HashTable[index]->next;
        ptr2 = HashTable[index];

        while(ptr1 != nullptr && ptr1->enemyName != enemyName)
        {
            ptr2 = ptr1;
            ptr1 = ptr1->next;
        }

        //if an index has several items, and no matches
        if(ptr1 == nullptr)
        {
            cout << enemyName << "does not exist inside the hash table";
        }
        else //if an index has several items, and a match that isn't the first item
        {
            setPtr = ptr1;
            ptr1 = ptr1->next;
            ptr2->next = ptr1;

            setPtr->enemyName = enemyName;
            setPtr->maxHealthPoints = maxHealthPoints;
        }
    }
    
}

//the methods below here mostly exist for help with testing

//method to see how many items are at an index
//important for seeing how many items are in the bucket
int hashADT::numOfItemsAtIndex(int index)
{
    int counter = 0;

    if (HashTable[index]->enemyName == "n/a")
    {
        return counter;
    }
    else
    {
        counter++;
        enemy* ptr = HashTable[index];
        
        while(ptr->next != nullptr)
        {
            counter++;
            ptr = ptr->next;
        }
    }
    return counter;
}

//method to print the entire hash table and all the keys and values that are
//the first item in that index
void hashADT::printHashTable()
{
    int number;
    for (int i = 0; i < hashTableSize; i++)
    {

        number = numOfItemsAtIndex(i);
        cout << "-------------------------\n";
        cout << "index value =" << i << endl;
        cout << HashTable[i]->enemyName << endl;
        cout << HashTable[i]->maxHealthPoints << endl;
        cout << "# of items = " << number << endl;
        cout << "-------------------------\n";

    }
}

//method to print all items at a particular index, including the ones that are linked
void hashADT::printItemsAtIndex(int index) 
{

    enemy* ptr = HashTable[index];

    if(ptr->enemyName == "n/a")
    {
        cout << "index at" << index << " is empty";
    }
    else
    {
        cout << "index at " << index << " has these enemies.\n ";

        while(ptr != nullptr)
        {
        cout << "-------------------------\n";
        cout << ptr->enemyName << endl;
        cout << ptr->maxHealthPoints << endl;
        cout << "-------------------------\n";
        ptr = ptr->next;
        }
    }

}