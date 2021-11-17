
#include <iostream>
#include "BST.h"
#include "node.h"

using namespace std;



BST::BST()														//class BST constructor
{
    root = nullptr;												//Initialize root node to NULL
}

void nodemethod::insertNode(char character)
{
    //Create a newNode
    node *newNode = new node;
    //Initialize new node with character data and empty children
    newNode->data = character;
    newNode->left = nullptr;
    newNode->right = nullptr;
    
    //Create empty parent node
    node *parent;
    parent = nullptr;
    
    //Call isEmpty() to check if root exists
    if (isEmpty()) {
        //Assign new node to root
        root = newNode;
        cout << root->data << " added as root" << endl;
        return;
    }
    //Create current node
    node *current;
    //Assign the root node to current node to begin descent
    current = root;
    bool found = false;
    
    //Loops until empty child is found
    while (!found && current !=nullptr) {
        parent = current;
        //If the new character is greater than current node's data, go down to the left
        if (newNode->data < current->data) {
            current = current->left;
        }
        //Else if the new character is less than current node's data, go down to the right
        else if (newNode->data > current->data) {
            current = current->right;
        }
        //Else character already exists in tree
        else {
            found = true;
        }
    }
    //If character does not exist,
    if (!found) {
        //If character is less than the parent data, add to left
        if (newNode->data < parent->data) {
            parent->left = newNode;
            cout << "Inserted on left." << endl;
        }
        //Else character is greater than the parent data, and add to right
        else {
            parent->right = newNode;
            cout << "Inserted on right." << endl;
        }
    }
    //Else character already exists and notify user
    else {
        cout << "Item already in the tree" << endl;
    }
}


void BST::displayPreorder(){                                     //Define function printPreorder()
    cout << "\tTraversing Preorder" << endl;
    cout << " " << endl;
    cout << "Node Info\tLeft Child Info\tRight Child Info" << endl;
    cout << " " << endl;
    cout << "---------\t---------------\t----------------" << endl;

    traversePreorder(this->root);                                   //Call traversePreorder() and pass the root node of the tree to the function
}


void BST::traversePreorder(node* nnode){                            //Define traversePreorder() to display the preorder traversal of the tree

    if (nnode == nullptr){                                      //If current node is null, then return
        return;
    }

    cout << nnode->data << "\t\t";

    if (nnode->left != nullptr){
        cout << nnode->left->data << "\t\t";
    }
    else {
        cout << "NIL\t\t";
    }

    if (nnode->right != nullptr){
        cout << nnode->right->data << "\t\t";
    }
    else {
        cout << "NIL\t\t";
    }

    cout << " " << endl;

    traversePreorder(nnode->left);
    traversePreorder(nnode->right);
}


void BST::searchBST(char search_item){
    struct node *pointernode = root;

    while (pointernode != nullptr && pointernode->data != search_item) {
        if (search_item < pointernode->data) {
            pointernode = pointernode->left;
        }
        else {
            pointernode = pointernode->right;
        }
    }

    if (pointernode != nullptr) {
        cout << search_item << " is found in the BST\n";
    }
    else {
        cout << search_item << " is not found in the BST" << endl;
        }
}


int BST::leafCount(node*root_node){
    if (root_node == nullptr) {
        return 0;
    }

    if (root_node->left == nullptr && root_node->right == nullptr){
        return 1;
    }
    else {
        return leafCount(root_node->left) + leafCount(root_node->right);
    }
}


void BST::nodeSibling(char sibling_node){
    struct node* pointernode = root;
    struct node* parent_node = nullptr;

    while (pointernode !=nullptr && pointernode->data != sibling_node){
        if (sibling_node < pointernode->data){
            parent_node = pointernode;
            pointernode = pointernode->left;
        }
        else {
            parent_node = pointernode;
            pointernode = pointernode->right;
        }
    }

    if (pointernode == nullptr){
        cout << sibling_node << "has no sibling." << endl;
    }
    else if (pointernode == root){
        cout << "Root item has no siblings.";
    }
    else if (parent_node->left->data == sibling_node) {
        if (parent_node->right != nullptr){
            cout << "The sibling of " << sibling_node << " is " << parent_node->right->data << endl;
        }
        else {
            cout << sibling_node << " has no sibling. " << endl;
        }
    }
    else {
        if (parent_node->left != nullptr){
            cout << "The sibling of " << sibling_node << " is " << parent_node->left->data << endl;
        }
        else {
            cout << sibling_node << " has no sibling. " << endl;
        }
    }
}


#include "BST.h"
