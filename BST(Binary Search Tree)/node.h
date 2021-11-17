
#ifndef BST2
#define BST2

#include <iostream>

using namespace std;

class nodemethod
{
private:
    struct node
    {
        char data;
        node* left;
        node* right;
    };
    
    node* root;

public:
    nodemethod();
    void deleteNode(char);                          //Delete item in BST
    int count();
    int leafCount(node*);                           //Counts number of leaves in BST//Count driver
    
};

#endif //BST2
