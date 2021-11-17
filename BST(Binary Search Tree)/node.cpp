
#include "node.h"
#include "BST.h"

using namespace std;


nodemethod::nodemethod()
{
     root = nullptr;            
}

void nodemethod::deleteNode(char del_item){
    struct node *pointernode, *parent_node;
    struct node *repPar, *repNode;
    struct node *child_node;
    
    int isNodeLeft = 0;
    parent_node = nullptr;
    pointernode = root;
    
    while (pointernode != nullptr && pointernode->data != del_item){
        if (del_item < pointernode->data) {
            parent_node = pointernode;
            isNodeLeft = 1;
            pointernode = pointernode->left;
        }
        else {
            parent_node = pointernode;
            isNodeLeft = 0;
            pointernode = pointernode->right;
        }
    }
    
    if (pointernode == nullptr) {
        cout << del_item << " is not found in the BST" << endl;
    }
    
    if ((pointernode->left == nullptr) && (pointernode->right == nullptr)) {
        if (parent_node == nullptr) {
            free(pointernode);
            root = nullptr;
        }
        else {
            free(pointernode);
            if (isNodeLeft) {
                parent_node->left = nullptr;
            }
            else {
                parent_node->right = nullptr;
            }
        }
    }
    else if ((pointernode->left == nullptr) || (pointernode->right == nullptr)){
        if (pointernode->left != nullptr){
            child_node = pointernode->left;
        }
        else {
            child_node = pointernode->right;
        }
        
        if (parent_node == nullptr){
            root = child_node;
            free(pointernode);
        }
        else {
            if (isNodeLeft) {
                parent_node->left = child_node;
            }
            else {
                parent_node->right = child_node;
            }
            
            free(pointernode);
        }
    }
    else {
        repPar = pointernode;
        repNode = pointernode->left;
        isNodeLeft = 1;
        
        while (repNode->right != nullptr){
            repPar = repNode;
            repNode = repNode->right;
            isNodeLeft = 0;
        }
        
        pointernode->data = repNode->data;
        
        if (isNodeLeft) {
            pointernode->left = repNode->left;
            free(repNode);
        }
        else {
            repPar->right = repNode->left;
            free(repNode);
        }
    }
    cout << del_item << " is deleted" << endl;
}

int nodemethod::count(){
    return leafCount(root);
}

