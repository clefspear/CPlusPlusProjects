
#ifndef BST2
#define BST2

#include <iostream>

using namespace std;

class BST
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
    BST();                                          //Constructor
    bool isEmpty() const { return root == NULL; }   //Check for empty
    //TODO: Define isEmpty() in BST.cpp instead
                            //Insert item in BST
    void displayPreorder();                         //Preorder traversing driver
    void traversePreorder(node*);                   //Preorder traversing
    void searchBST(char);                           //Searches BST for a specific node

    void nodeSibling(char);                         //Finds sibling of a node

};

#endif //BST2
