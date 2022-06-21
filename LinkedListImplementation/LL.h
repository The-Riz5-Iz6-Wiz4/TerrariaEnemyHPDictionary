
#include <string>

using namespace std;


#ifndef LL_H
#define LL_H

class LinkedList {

    private:

        typedef struct enemyNode {
            string enemyName;
            int HP;
            enemyNode* next;
        }* nodePtr;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;

    public:

        LinkedList();
        void addNode(string add_EnemyName, int add_HP);
        void deleteNode(string del_EnemyName);
        void printLL();
        void searchEnemy(string searched_enemy);
        void updateEnemy(string updated_enemy, int new_HP);
        void searchByIndex(int indexNum);
};





#endif