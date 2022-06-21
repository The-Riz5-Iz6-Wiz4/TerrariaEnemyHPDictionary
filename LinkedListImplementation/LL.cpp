#include <cstdlib>
#include <iostream>
#include <string>

#include "LL.h"

using namespace std;

//linked list constructor to initialize the necessary pointers
LinkedList::LinkedList() 
{

    head = nullptr;
    curr = nullptr;
    temp = nullptr;

}

//method to add a new node into the linked list
//loops until it reaches nullptr where it will place the node
void LinkedList::addNode(string add_EnemyName, int add_HP)
{
    nodePtr n = new enemyNode;
    n->next = nullptr;
    n->enemyName = add_EnemyName;
    n->HP = add_HP;

    if (head != nullptr)
    {
        curr = head;

        while(curr->next != nullptr)
        {
            curr = curr->next;
        }

        curr->next = n; //links the list together
    } 
    else
    {
        head = n;
    }
}

//method to delete a node in the linked list
//loops through the linked list until it finds a match
void LinkedList::deleteNode(string del_EnemyName)
{

    nodePtr delPtr = nullptr;
    temp = head;
    curr = head;

    while (curr != nullptr && curr->enemyName != del_EnemyName)
    {
        temp = curr;
        curr = curr->next;
    }

    if (curr == nullptr)
    {
        cout << del_EnemyName << " does not exist in the linked list." << endl;
        delete delPtr; //In this case delPtr is deleted to make sure there's no memory leak
    }
    else
    {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head)
        {
            head = head->next;
            temp = nullptr;  
        }

        delete delPtr;

        cout << del_EnemyName << " has been deleted" << endl;
    }

}

//search method using name
void LinkedList::searchEnemy(string searched_enemy)
{
    curr = head;

    while (curr != nullptr)
    {
        if (curr->enemyName == searched_enemy)
        {
            cout << searched_enemy << " has " << curr->HP << " max HP.";
            break;
        }

        curr = curr->next;
    }
}

//search method by index
void LinkedList::searchByIndex(int indexNum)
{
    curr = head;
    int counter = 0;

    while (curr != nullptr) {
        if (counter == indexNum)
        {
            cout << curr->enemyName << " HP at index " << indexNum << " is " << curr->HP << endl;
            break;
        }
        else
        {
        counter++;
        curr = curr->next;
        }
    }
}

//method to update the enemy's hp value
void LinkedList::updateEnemy(string updated_enemy, int new_HP)
{
    curr = head;

    while (curr->next != nullptr)
    {
        if (curr->enemyName == updated_enemy)
        {
            curr->HP = new_HP;
        }

        curr = curr->next;
    }

    if (curr == nullptr)
    {
        cout << updated_enemy << " does not exist in the linked list." << endl;
    }
}

//prints the entire linked list
void LinkedList::printLL()
{
    curr = head;

    while (curr != nullptr)
    {
        cout << "--------------------" << endl;
        cout << curr->enemyName << endl;
        cout << "HP: " << curr->HP << endl;
        cout << "--------------------" << endl;
        curr = curr->next;
    }
}
